#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 305082368U;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)59475;
int zero = 0;
unsigned long long int var_19 = 2978843306267405910ULL;
unsigned char var_20 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
