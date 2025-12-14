#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8641;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1133144433U;
unsigned short var_21 = (unsigned short)27168;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
