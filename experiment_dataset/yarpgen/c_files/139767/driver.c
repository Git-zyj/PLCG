#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1198958928;
unsigned char var_3 = (unsigned char)123;
signed char var_5 = (signed char)-20;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)42;
unsigned char var_9 = (unsigned char)143;
int zero = 0;
signed char var_15 = (signed char)-26;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
