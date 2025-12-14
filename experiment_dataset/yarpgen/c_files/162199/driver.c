#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_6 = (short)4816;
long long int var_7 = -8100478112140779288LL;
unsigned short var_8 = (unsigned short)18329;
long long int var_9 = -4134301501562259517LL;
unsigned short var_10 = (unsigned short)64381;
unsigned char var_11 = (unsigned char)213;
int zero = 0;
unsigned long long int var_14 = 3241405934694874738ULL;
signed char var_15 = (signed char)120;
short var_16 = (short)-11414;
signed char var_17 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
