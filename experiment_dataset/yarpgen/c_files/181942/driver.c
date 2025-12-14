#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4846;
int var_2 = -1264571402;
unsigned int var_3 = 819473697U;
int var_4 = 1980821686;
signed char var_6 = (signed char)105;
int var_7 = 833980149;
signed char var_10 = (signed char)34;
signed char var_11 = (signed char)69;
int var_12 = -1155186763;
short var_13 = (short)10501;
short var_14 = (short)16664;
int zero = 0;
unsigned int var_15 = 2821626942U;
unsigned long long int var_16 = 8280010583556695419ULL;
signed char var_17 = (signed char)23;
unsigned short var_18 = (unsigned short)22122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
