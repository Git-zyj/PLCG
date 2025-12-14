#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 431120170776110163ULL;
short var_1 = (short)22658;
_Bool var_2 = (_Bool)1;
short var_3 = (short)27819;
long long int var_5 = 5262618743353613716LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 732310821266448979ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 867812596564910589ULL;
short var_11 = (short)-4216;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)39751;
_Bool var_14 = (_Bool)0;
long long int var_15 = 9056622574107133532LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
