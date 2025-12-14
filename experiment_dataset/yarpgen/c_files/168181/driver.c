#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17344;
long long int var_4 = -863329958577412142LL;
_Bool var_5 = (_Bool)1;
int var_8 = 378749376;
int var_10 = -1025878442;
unsigned int var_16 = 3692859368U;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 855115193;
unsigned long long int var_21 = 2104053703465076088ULL;
long long int var_22 = -1403204734317403056LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
