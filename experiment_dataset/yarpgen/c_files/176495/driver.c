#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48294;
short var_3 = (short)17768;
long long int var_8 = -8040913490070558461LL;
_Bool var_9 = (_Bool)0;
int var_14 = -113113244;
unsigned char var_16 = (unsigned char)8;
int zero = 0;
unsigned short var_19 = (unsigned short)16442;
signed char var_20 = (signed char)80;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
