#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25977;
short var_2 = (short)-16356;
unsigned char var_4 = (unsigned char)103;
int var_5 = -1329029362;
signed char var_6 = (signed char)-74;
unsigned int var_7 = 119667467U;
int var_12 = 1310455110;
unsigned char var_16 = (unsigned char)94;
int zero = 0;
short var_17 = (short)31115;
unsigned long long int var_18 = 10636092230796351116ULL;
int var_19 = 653166984;
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
