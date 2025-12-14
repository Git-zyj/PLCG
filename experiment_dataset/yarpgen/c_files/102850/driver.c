#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14653265199651725522ULL;
unsigned char var_2 = (unsigned char)43;
unsigned int var_3 = 2396364227U;
unsigned char var_4 = (unsigned char)247;
int zero = 0;
unsigned char var_10 = (unsigned char)234;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
