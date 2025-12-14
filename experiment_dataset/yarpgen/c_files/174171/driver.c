#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-94;
unsigned short var_4 = (unsigned short)64430;
unsigned long long int var_6 = 5995138260239963670ULL;
signed char var_8 = (signed char)-86;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 4085806928400616798ULL;
int zero = 0;
unsigned long long int var_13 = 1430541718904161948ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)26165;
unsigned short var_16 = (unsigned short)45575;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
