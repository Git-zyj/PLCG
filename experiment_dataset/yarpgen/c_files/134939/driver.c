#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3578651076197042829LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_18 = 6244733660154479627ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2065236075U;
int var_22 = 1092359294;
unsigned int var_23 = 751743379U;
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
