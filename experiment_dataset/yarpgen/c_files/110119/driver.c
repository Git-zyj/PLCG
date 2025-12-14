#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)17;
unsigned long long int var_15 = 5772017385178037455ULL;
unsigned long long int var_17 = 7821519442008597061ULL;
int zero = 0;
unsigned long long int var_18 = 12162677945418513877ULL;
unsigned char var_19 = (unsigned char)158;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
