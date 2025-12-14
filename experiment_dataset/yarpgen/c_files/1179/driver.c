#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-21;
unsigned short var_8 = (unsigned short)52957;
_Bool var_10 = (_Bool)0;
long long int var_11 = -6253250265994831476LL;
unsigned int var_12 = 58553510U;
int zero = 0;
long long int var_13 = -6951311208103955664LL;
unsigned char var_14 = (unsigned char)135;
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
