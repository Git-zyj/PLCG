#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7664489598997237016ULL;
unsigned short var_3 = (unsigned short)5063;
long long int var_4 = 5860758913967367274LL;
unsigned long long int var_5 = 8682970781981630153ULL;
unsigned long long int var_8 = 8116260723319050358ULL;
signed char var_11 = (signed char)-40;
int zero = 0;
long long int var_12 = 7887318283530251471LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)895;
signed char var_15 = (signed char)-105;
unsigned short var_16 = (unsigned short)40994;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
