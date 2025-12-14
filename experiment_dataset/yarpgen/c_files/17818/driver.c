#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)36908;
short var_8 = (short)7413;
unsigned char var_9 = (unsigned char)252;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 9373289785353319661ULL;
unsigned short var_16 = (unsigned short)22216;
int zero = 0;
unsigned int var_20 = 2506137598U;
unsigned int var_21 = 3138070267U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
