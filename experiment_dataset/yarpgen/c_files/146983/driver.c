#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1783303899U;
unsigned char var_5 = (unsigned char)201;
int var_6 = 951663656;
unsigned long long int var_7 = 17815819523506443180ULL;
unsigned int var_9 = 145539960U;
unsigned long long int var_11 = 3380455535225407285ULL;
unsigned int var_12 = 474535882U;
unsigned int var_13 = 2242395095U;
short var_15 = (short)17220;
int zero = 0;
short var_17 = (short)-10736;
unsigned long long int var_18 = 15728894288792266782ULL;
short var_19 = (short)20853;
short var_20 = (short)-21406;
short var_21 = (short)577;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
