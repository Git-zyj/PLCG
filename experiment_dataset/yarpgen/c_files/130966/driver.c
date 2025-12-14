#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4113047047820207794ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)60;
unsigned int var_5 = 1066155957U;
unsigned short var_7 = (unsigned short)59538;
unsigned int var_11 = 2466354801U;
int zero = 0;
unsigned short var_13 = (unsigned short)6892;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
