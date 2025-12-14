#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3731178313111351413ULL;
unsigned short var_5 = (unsigned short)28369;
_Bool var_7 = (_Bool)0;
unsigned char var_13 = (unsigned char)46;
unsigned short var_18 = (unsigned short)45353;
int zero = 0;
unsigned long long int var_19 = 656550331687272878ULL;
unsigned short var_20 = (unsigned short)61034;
unsigned int var_21 = 1813355199U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
