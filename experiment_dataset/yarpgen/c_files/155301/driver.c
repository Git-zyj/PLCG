#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)159;
_Bool var_11 = (_Bool)0;
int var_13 = -1916952880;
int zero = 0;
unsigned long long int var_15 = 7968998116167226319ULL;
unsigned short var_16 = (unsigned short)34756;
unsigned short var_17 = (unsigned short)54408;
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
