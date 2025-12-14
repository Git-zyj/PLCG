#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18431419942946750306ULL;
int var_2 = 212316671;
unsigned short var_3 = (unsigned short)33550;
unsigned long long int var_4 = 2366939144974692715ULL;
short var_8 = (short)-23865;
unsigned long long int var_9 = 13043647159881864635ULL;
signed char var_12 = (signed char)124;
unsigned long long int var_13 = 11691657787481113641ULL;
signed char var_15 = (signed char)93;
int zero = 0;
short var_16 = (short)218;
int var_17 = -1004669666;
void init() {
}

void checksum() {
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
