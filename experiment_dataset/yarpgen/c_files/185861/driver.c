#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1823419832U;
signed char var_2 = (signed char)98;
unsigned char var_7 = (unsigned char)2;
unsigned char var_8 = (unsigned char)56;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-90;
unsigned char var_17 = (unsigned char)172;
signed char var_18 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
