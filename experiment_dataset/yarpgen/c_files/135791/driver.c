#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)133;
signed char var_3 = (signed char)32;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)26;
unsigned char var_11 = (unsigned char)250;
int var_14 = 1762688294;
int zero = 0;
signed char var_16 = (signed char)118;
int var_17 = -548371572;
_Bool var_18 = (_Bool)0;
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
