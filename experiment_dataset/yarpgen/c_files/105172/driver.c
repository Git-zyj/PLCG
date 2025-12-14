#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8365992755246442369ULL;
unsigned short var_4 = (unsigned short)33252;
int var_6 = 1081477179;
int var_8 = -2069671933;
_Bool var_9 = (_Bool)0;
int var_10 = -958235880;
int zero = 0;
signed char var_14 = (signed char)-94;
unsigned long long int var_15 = 6894784292420875006ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
