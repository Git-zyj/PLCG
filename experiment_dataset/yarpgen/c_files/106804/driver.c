#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
short var_3 = (short)28106;
signed char var_8 = (signed char)-79;
unsigned short var_9 = (unsigned short)15588;
short var_12 = (short)13123;
unsigned char var_14 = (unsigned char)203;
int zero = 0;
long long int var_15 = -5032014624707564073LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
