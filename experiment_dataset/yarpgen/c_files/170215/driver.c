#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11853;
int var_4 = -1405784740;
unsigned char var_5 = (unsigned char)169;
int var_6 = -1439628147;
int var_8 = -1830592060;
unsigned long long int var_9 = 10017069418813238562ULL;
unsigned short var_10 = (unsigned short)26263;
unsigned long long int var_11 = 15747474581497532453ULL;
unsigned long long int var_12 = 16844678895635507774ULL;
int zero = 0;
signed char var_15 = (signed char)42;
unsigned char var_16 = (unsigned char)187;
unsigned short var_17 = (unsigned short)58210;
int var_18 = -1536318935;
unsigned int var_19 = 3990037943U;
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
