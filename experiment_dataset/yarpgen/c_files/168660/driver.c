#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 765334709U;
unsigned int var_10 = 1791792027U;
signed char var_12 = (signed char)-60;
unsigned long long int var_13 = 8247937633169114357ULL;
long long int var_15 = -4532897733388937782LL;
unsigned long long int var_17 = 16166543020193308476ULL;
int zero = 0;
unsigned int var_18 = 826326284U;
signed char var_19 = (signed char)-125;
int var_20 = 432649385;
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
