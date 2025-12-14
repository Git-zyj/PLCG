#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5667643023237107929LL;
unsigned short var_3 = (unsigned short)34755;
unsigned short var_6 = (unsigned short)2443;
unsigned int var_13 = 694132053U;
int zero = 0;
long long int var_15 = -49563274837633573LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
