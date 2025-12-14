#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5550;
long long int var_5 = -4439450308611345798LL;
long long int var_6 = 3038012365735613404LL;
int var_7 = -242522786;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-27693;
unsigned int var_13 = 1895871982U;
long long int var_14 = 6426867046836875725LL;
int zero = 0;
signed char var_16 = (signed char)37;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)12324;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
