#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15870562645497133097ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_7 = 3360263922U;
int zero = 0;
unsigned short var_10 = (unsigned short)33701;
long long int var_11 = -2964144901703324660LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
