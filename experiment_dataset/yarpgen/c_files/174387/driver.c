#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5512504602828108087LL;
unsigned short var_3 = (unsigned short)29613;
unsigned long long int var_4 = 4308254784053057119ULL;
signed char var_5 = (signed char)-7;
unsigned long long int var_7 = 2447212529648190329ULL;
unsigned long long int var_9 = 9430614619099215208ULL;
unsigned int var_11 = 3564654323U;
unsigned int var_12 = 2036243799U;
int zero = 0;
unsigned char var_15 = (unsigned char)80;
unsigned int var_16 = 2662447946U;
signed char var_17 = (signed char)-23;
int var_18 = 502175349;
void init() {
}

void checksum() {
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
