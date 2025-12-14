#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1878048623U;
unsigned short var_7 = (unsigned short)35696;
unsigned char var_8 = (unsigned char)181;
_Bool var_10 = (_Bool)1;
unsigned short var_15 = (unsigned short)26652;
unsigned int var_17 = 663342255U;
int zero = 0;
signed char var_19 = (signed char)-45;
unsigned short var_20 = (unsigned short)39992;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
