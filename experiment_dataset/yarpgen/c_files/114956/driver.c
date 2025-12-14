#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6233166574426999648ULL;
long long int var_2 = 6359281394023350110LL;
unsigned short var_7 = (unsigned short)31026;
unsigned long long int var_9 = 3000945442743067808ULL;
unsigned char var_10 = (unsigned char)43;
long long int var_11 = 69397839259213023LL;
int zero = 0;
signed char var_12 = (signed char)105;
unsigned int var_13 = 434197403U;
int var_14 = 2025059079;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
