#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15725495247907072763ULL;
unsigned char var_7 = (unsigned char)85;
unsigned long long int var_10 = 730185879092518349ULL;
int zero = 0;
int var_12 = 1632678051;
unsigned long long int var_13 = 6559070735505073259ULL;
unsigned long long int var_14 = 12693014723798894ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
