#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)22;
unsigned char var_3 = (unsigned char)127;
unsigned short var_5 = (unsigned short)40213;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-43;
signed char var_10 = (signed char)13;
short var_13 = (short)-20598;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)82;
signed char var_17 = (signed char)109;
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
