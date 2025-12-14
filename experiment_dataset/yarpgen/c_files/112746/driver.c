#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3982768506U;
long long int var_5 = 6361042529217477165LL;
int var_6 = 837827535;
long long int var_9 = 4364344659726728546LL;
long long int var_10 = -860452608516625492LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-16;
unsigned char var_17 = (unsigned char)97;
short var_18 = (short)-26812;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
