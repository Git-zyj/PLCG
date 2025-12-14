#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6360334413315582705LL;
unsigned short var_6 = (unsigned short)18802;
long long int var_8 = -7108431258795190332LL;
unsigned short var_9 = (unsigned short)10222;
unsigned char var_12 = (unsigned char)12;
int var_14 = 254950818;
long long int var_17 = -8834988951833158836LL;
int zero = 0;
unsigned int var_18 = 1732182005U;
unsigned short var_19 = (unsigned short)63916;
signed char var_20 = (signed char)123;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
