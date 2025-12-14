#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43480;
unsigned char var_3 = (unsigned char)82;
unsigned int var_4 = 3909028618U;
short var_5 = (short)-24862;
long long int var_7 = -5297222955694377168LL;
unsigned long long int var_8 = 13594896033861265898ULL;
long long int var_10 = 4540434402057064084LL;
unsigned int var_11 = 4120211484U;
int zero = 0;
unsigned long long int var_12 = 752153644850975837ULL;
long long int var_13 = 7728338566393894051LL;
unsigned long long int var_14 = 6861028261242985530ULL;
signed char var_15 = (signed char)-49;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
