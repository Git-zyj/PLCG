#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2571719777545381815ULL;
unsigned int var_3 = 3131552233U;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)80;
unsigned short var_11 = (unsigned short)12794;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
