#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)97;
int var_9 = 1158091505;
long long int var_10 = 6624415028504262856LL;
signed char var_11 = (signed char)-123;
int zero = 0;
unsigned long long int var_12 = 11999158895398273713ULL;
signed char var_13 = (signed char)24;
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
