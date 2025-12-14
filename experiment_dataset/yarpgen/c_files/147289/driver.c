#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2751058139362106634ULL;
unsigned int var_11 = 259063576U;
long long int var_12 = 8339629074634515921LL;
int zero = 0;
unsigned long long int var_20 = 9560163901338467544ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-65;
short var_23 = (short)12220;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
