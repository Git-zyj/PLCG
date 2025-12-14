#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned char var_9 = (unsigned char)254;
unsigned char var_17 = (unsigned char)48;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-114;
unsigned long long int var_21 = 10636406806719106325ULL;
signed char var_22 = (signed char)-20;
void init() {
}

void checksum() {
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
