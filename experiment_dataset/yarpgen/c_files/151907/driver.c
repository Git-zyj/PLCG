#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)17899;
long long int var_16 = -3163346910710594066LL;
int zero = 0;
int var_19 = -132189285;
int var_20 = -929260703;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
