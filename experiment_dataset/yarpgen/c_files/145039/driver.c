#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2979444920U;
unsigned int var_1 = 1924050279U;
int var_4 = 660342600;
unsigned int var_5 = 3279659521U;
unsigned short var_13 = (unsigned short)41171;
int zero = 0;
unsigned short var_18 = (unsigned short)3895;
unsigned int var_19 = 2670463880U;
unsigned short var_20 = (unsigned short)43037;
int var_21 = 1381410545;
unsigned char var_22 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
