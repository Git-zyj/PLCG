#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2791935810617810521LL;
_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)159;
unsigned int var_9 = 2370167324U;
int zero = 0;
unsigned int var_12 = 970870178U;
long long int var_13 = -7569187726941517140LL;
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
