#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1571522890;
unsigned int var_12 = 3903790491U;
unsigned char var_13 = (unsigned char)211;
long long int var_14 = -330614042624759421LL;
unsigned char var_19 = (unsigned char)18;
int zero = 0;
signed char var_20 = (signed char)-59;
unsigned int var_21 = 2259556264U;
unsigned char var_22 = (unsigned char)252;
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
