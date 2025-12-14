#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 701686716U;
int var_2 = 108509246;
int var_3 = -463066587;
int var_5 = -134135657;
int var_7 = -1457912885;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)121;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
