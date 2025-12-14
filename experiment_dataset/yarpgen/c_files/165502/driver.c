#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1901878476228541075LL;
long long int var_3 = 3070228548734408332LL;
unsigned long long int var_6 = 17869453126501382680ULL;
unsigned short var_7 = (unsigned short)55040;
int var_8 = -919566978;
int var_9 = -984995916;
_Bool var_10 = (_Bool)1;
int var_11 = -1664246047;
signed char var_12 = (signed char)-80;
int zero = 0;
unsigned long long int var_13 = 1602468454586262842ULL;
int var_14 = -1175458187;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
