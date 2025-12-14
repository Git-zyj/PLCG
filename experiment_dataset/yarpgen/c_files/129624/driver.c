#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2116931889U;
signed char var_7 = (signed char)-104;
unsigned int var_11 = 350517488U;
int zero = 0;
long long int var_12 = -7146808492432599524LL;
long long int var_13 = -7691953577590579380LL;
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
