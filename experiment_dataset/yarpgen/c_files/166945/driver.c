#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1845;
long long int var_1 = -8845126550468854699LL;
signed char var_2 = (signed char)-60;
unsigned long long int var_3 = 1988577576810629162ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 1407269626867058068LL;
signed char var_6 = (signed char)103;
unsigned long long int var_7 = 8281716850239398234ULL;
unsigned char var_9 = (unsigned char)4;
_Bool var_10 = (_Bool)1;
long long int var_11 = 653517475381558562LL;
int zero = 0;
unsigned long long int var_12 = 6707999407807129287ULL;
unsigned long long int var_13 = 2103069307557670990ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
