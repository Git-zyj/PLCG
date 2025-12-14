#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20693;
short var_4 = (short)-28459;
short var_6 = (short)11635;
long long int var_7 = -2482343980891378447LL;
long long int var_8 = -3785138086783658972LL;
long long int var_9 = -721356786682130608LL;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)10050;
int zero = 0;
int var_13 = 300454983;
signed char var_14 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
