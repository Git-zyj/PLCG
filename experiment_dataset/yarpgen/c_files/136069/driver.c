#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 119762395U;
int var_1 = 1954114319;
signed char var_5 = (signed char)36;
int var_7 = 2045482344;
long long int var_9 = 1347949508385486835LL;
unsigned long long int var_11 = 1383647865420070615ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)64599;
unsigned char var_14 = (unsigned char)163;
unsigned short var_15 = (unsigned short)2632;
int var_16 = -304066641;
int var_17 = -1193173567;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
