#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1596570204;
int var_5 = -1821884332;
unsigned int var_6 = 2165316565U;
unsigned char var_7 = (unsigned char)44;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)49;
int zero = 0;
unsigned char var_11 = (unsigned char)105;
unsigned short var_12 = (unsigned short)53349;
unsigned long long int var_13 = 515916367391773097ULL;
void init() {
}

void checksum() {
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
