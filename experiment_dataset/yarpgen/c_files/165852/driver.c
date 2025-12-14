#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46079;
unsigned short var_1 = (unsigned short)49339;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 637771392U;
signed char var_9 = (signed char)-23;
signed char var_11 = (signed char)24;
signed char var_13 = (signed char)-73;
signed char var_16 = (signed char)42;
int zero = 0;
unsigned char var_17 = (unsigned char)163;
int var_18 = 2033879031;
unsigned char var_19 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
