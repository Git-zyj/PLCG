#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)22704;
signed char var_12 = (signed char)120;
unsigned short var_14 = (unsigned short)40966;
int zero = 0;
long long int var_16 = 3609210432857958088LL;
unsigned long long int var_17 = 364742823242982196ULL;
unsigned char var_18 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
