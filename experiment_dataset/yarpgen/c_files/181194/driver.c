#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37128;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)42;
int var_9 = 815507048;
int zero = 0;
unsigned short var_10 = (unsigned short)15165;
unsigned short var_11 = (unsigned short)59723;
int var_12 = -687388327;
signed char var_13 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
