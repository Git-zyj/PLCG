#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45011;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)54;
signed char var_12 = (signed char)35;
signed char var_15 = (signed char)109;
int var_17 = -1721198661;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-120;
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
