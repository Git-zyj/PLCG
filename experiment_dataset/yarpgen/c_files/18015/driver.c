#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 370269466;
short var_2 = (short)7999;
signed char var_3 = (signed char)62;
short var_6 = (short)9377;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)24606;
int zero = 0;
unsigned short var_10 = (unsigned short)50147;
int var_11 = -1999123654;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)34075;
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
