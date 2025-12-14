#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned char var_3 = (unsigned char)230;
short var_6 = (short)16768;
unsigned char var_15 = (unsigned char)192;
int zero = 0;
short var_19 = (short)-3648;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)57266;
unsigned long long int var_22 = 6144720838412686638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
