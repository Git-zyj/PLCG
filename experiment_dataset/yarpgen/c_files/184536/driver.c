#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27739;
signed char var_2 = (signed char)-110;
long long int var_3 = 4635703599179789646LL;
unsigned short var_4 = (unsigned short)31054;
unsigned char var_5 = (unsigned char)172;
long long int var_7 = -7492394608166674850LL;
unsigned char var_10 = (unsigned char)96;
unsigned char var_13 = (unsigned char)129;
long long int var_14 = 7260116892959542403LL;
int zero = 0;
long long int var_15 = -3324488052175153148LL;
long long int var_16 = 6035836270508936448LL;
unsigned long long int var_17 = 9717399013673226206ULL;
unsigned long long int var_18 = 14245206539096922162ULL;
unsigned long long int var_19 = 12826934433196771673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
