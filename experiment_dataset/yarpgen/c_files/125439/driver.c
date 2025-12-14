#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16729859978111502317ULL;
unsigned int var_2 = 3099766076U;
unsigned char var_3 = (unsigned char)158;
short var_4 = (short)5655;
_Bool var_5 = (_Bool)0;
int var_6 = 1708727952;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3375547219U;
unsigned int var_19 = 3151243727U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
