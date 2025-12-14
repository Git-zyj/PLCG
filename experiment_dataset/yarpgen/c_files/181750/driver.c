#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1454976890;
int var_5 = -1033678121;
unsigned short var_6 = (unsigned short)29545;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)4133;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
