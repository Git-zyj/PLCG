#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1342725370;
signed char var_9 = (signed char)70;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-13;
unsigned char var_12 = (unsigned char)115;
int zero = 0;
signed char var_16 = (signed char)20;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
