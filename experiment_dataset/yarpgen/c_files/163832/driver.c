#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3822819036U;
unsigned short var_4 = (unsigned short)44583;
unsigned char var_6 = (unsigned char)24;
long long int var_7 = 7688470077376500671LL;
signed char var_10 = (signed char)43;
int zero = 0;
unsigned int var_12 = 75795393U;
long long int var_13 = 495875359060451422LL;
unsigned long long int var_14 = 2493998054609508169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
