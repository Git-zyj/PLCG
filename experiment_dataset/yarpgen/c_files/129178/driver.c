#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3595643292U;
unsigned char var_1 = (unsigned char)11;
long long int var_4 = 8335633338816767286LL;
unsigned char var_5 = (unsigned char)18;
_Bool var_10 = (_Bool)1;
long long int var_12 = -37233399171587107LL;
int zero = 0;
unsigned long long int var_17 = 13009279087767653565ULL;
unsigned int var_18 = 2586011870U;
signed char var_19 = (signed char)-64;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
