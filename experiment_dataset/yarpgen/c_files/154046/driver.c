#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
long long int var_1 = -5039925517951737240LL;
unsigned short var_2 = (unsigned short)3577;
long long int var_3 = -1199814511634558931LL;
unsigned char var_4 = (unsigned char)197;
short var_5 = (short)22816;
int var_6 = -1971180826;
unsigned int var_7 = 2288306140U;
short var_9 = (short)29095;
short var_10 = (short)-10820;
_Bool var_11 = (_Bool)1;
short var_12 = (short)2834;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12972576307829016031ULL;
short var_15 = (short)29745;
unsigned long long int var_16 = 1318426589426417731ULL;
void init() {
}

void checksum() {
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
