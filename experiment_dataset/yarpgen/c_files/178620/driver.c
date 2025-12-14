#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7183;
unsigned int var_4 = 3938645748U;
unsigned char var_5 = (unsigned char)77;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-41;
unsigned char var_12 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
