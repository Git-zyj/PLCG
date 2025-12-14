#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 16637786U;
signed char var_1 = (signed char)-27;
long long int var_2 = -6765734149334909142LL;
_Bool var_3 = (_Bool)1;
int var_4 = -159053612;
unsigned short var_10 = (unsigned short)46657;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2486390808U;
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
