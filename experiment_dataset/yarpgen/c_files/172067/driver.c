#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 653830767;
short var_6 = (short)8898;
unsigned long long int var_7 = 1581668935424153511ULL;
int var_8 = 1584394704;
unsigned short var_9 = (unsigned short)17948;
long long int var_11 = 8715251396185182512LL;
unsigned long long int var_13 = 11294922331501677333ULL;
unsigned long long int var_16 = 4222227061685790344ULL;
int zero = 0;
long long int var_17 = 480671044449179418LL;
unsigned long long int var_18 = 2409202813310119322ULL;
void init() {
}

void checksum() {
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
