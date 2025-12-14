#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2165782103095845908ULL;
int var_3 = 1291671485;
unsigned char var_4 = (unsigned char)81;
unsigned short var_5 = (unsigned short)64819;
unsigned char var_7 = (unsigned char)179;
int var_8 = -703773037;
unsigned char var_9 = (unsigned char)98;
long long int var_11 = -5394611194157188890LL;
int zero = 0;
short var_14 = (short)11313;
unsigned int var_15 = 3107154476U;
unsigned int var_16 = 1784650171U;
unsigned char var_17 = (unsigned char)120;
short var_18 = (short)-20696;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
