#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_10 = -703211394;
unsigned short var_11 = (unsigned short)32352;
unsigned char var_14 = (unsigned char)124;
unsigned short var_19 = (unsigned short)49708;
int zero = 0;
signed char var_20 = (signed char)-87;
signed char var_21 = (signed char)-87;
unsigned short var_22 = (unsigned short)19966;
void init() {
}

void checksum() {
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
