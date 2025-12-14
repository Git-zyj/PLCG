#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3925460256668421054LL;
signed char var_1 = (signed char)-100;
unsigned char var_3 = (unsigned char)194;
unsigned int var_5 = 1825097980U;
int var_11 = 887584860;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-58;
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
