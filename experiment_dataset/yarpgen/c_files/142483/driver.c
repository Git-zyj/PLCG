#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5836297186331064750ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)52450;
_Bool var_9 = (_Bool)1;
int var_11 = 1805156469;
int zero = 0;
unsigned long long int var_14 = 1539182231408105940ULL;
int var_15 = -590289694;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
