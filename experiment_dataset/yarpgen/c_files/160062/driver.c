#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1464780032;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)180;
long long int var_9 = -7534051841078713347LL;
int zero = 0;
unsigned int var_11 = 175407317U;
unsigned long long int var_12 = 11394452388038334716ULL;
int var_13 = 1877768848;
long long int var_14 = 2095555765628805953LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
