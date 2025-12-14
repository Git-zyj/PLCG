#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -909646012;
unsigned long long int var_8 = 2111384754228997371ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 570553517U;
int zero = 0;
unsigned char var_20 = (unsigned char)161;
short var_21 = (short)-8150;
void init() {
}

void checksum() {
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
