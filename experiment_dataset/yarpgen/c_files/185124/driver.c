#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1928742430;
unsigned long long int var_2 = 446076394411678077ULL;
long long int var_8 = 9189094210018327808LL;
int var_9 = 1388449902;
int zero = 0;
unsigned short var_11 = (unsigned short)30531;
unsigned char var_12 = (unsigned char)191;
unsigned char var_13 = (unsigned char)50;
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
