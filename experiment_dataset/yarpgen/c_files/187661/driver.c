#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
long long int var_3 = -6072827270651196614LL;
signed char var_5 = (signed char)-24;
unsigned long long int var_6 = 6473440455152489406ULL;
unsigned int var_7 = 3099081118U;
_Bool var_16 = (_Bool)0;
long long int var_18 = 3695778386410490034LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -3413392567703356339LL;
unsigned long long int var_22 = 15033379053320785039ULL;
void init() {
}

void checksum() {
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
