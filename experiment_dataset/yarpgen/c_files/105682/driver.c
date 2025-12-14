#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2975321605U;
unsigned int var_6 = 3637154999U;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)37;
int zero = 0;
long long int var_19 = 3937361285167149995LL;
int var_20 = 1425477688;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
