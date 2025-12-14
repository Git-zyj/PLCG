#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40281;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1349698854U;
signed char var_8 = (signed char)40;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 2440389516949354914ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)254;
_Bool var_15 = (_Bool)0;
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
