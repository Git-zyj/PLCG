#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8804517055862989273ULL;
unsigned long long int var_3 = 2539267603116737908ULL;
unsigned long long int var_5 = 10911591088774638621ULL;
int var_12 = -901994311;
unsigned long long int var_15 = 2656439431787490715ULL;
unsigned char var_17 = (unsigned char)253;
int zero = 0;
signed char var_18 = (signed char)-20;
unsigned long long int var_19 = 7989585199038002332ULL;
unsigned short var_20 = (unsigned short)12990;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
