#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22919;
unsigned long long int var_5 = 9461974809345261215ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)87;
unsigned long long int var_14 = 4880160541966416913ULL;
void init() {
}

void checksum() {
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
