#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
short var_1 = (short)19478;
unsigned char var_2 = (unsigned char)120;
short var_3 = (short)28638;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = 819946148956293775LL;
unsigned long long int var_7 = 6123238115688556464ULL;
long long int var_9 = 7746223686954891035LL;
unsigned char var_10 = (unsigned char)134;
short var_13 = (short)11374;
int zero = 0;
short var_14 = (short)11012;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5812404116026817736LL;
short var_17 = (short)9043;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
