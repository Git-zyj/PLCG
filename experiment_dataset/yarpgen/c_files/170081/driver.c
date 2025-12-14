#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 994764922U;
unsigned long long int var_3 = 14972868557087065472ULL;
unsigned long long int var_4 = 14636576505667743488ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-81;
unsigned long long int var_8 = 15450624171170806669ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 1423709503;
int var_15 = -1618992111;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7315991637977420699LL;
int var_18 = 837819878;
int var_19 = -1545153475;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
