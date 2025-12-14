#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11704;
unsigned char var_6 = (unsigned char)115;
signed char var_8 = (signed char)-110;
int var_13 = 1713917515;
int var_14 = 2064335100;
unsigned int var_16 = 3823514382U;
unsigned long long int var_17 = 16165528849436747367ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)161;
_Bool var_19 = (_Bool)0;
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
