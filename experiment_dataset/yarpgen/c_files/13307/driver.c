#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 6520672647221517019ULL;
unsigned long long int var_9 = 36382475362368792ULL;
int zero = 0;
short var_18 = (short)-11664;
unsigned short var_19 = (unsigned short)30084;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
