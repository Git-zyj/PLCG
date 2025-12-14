#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8955405578343271874LL;
long long int var_6 = -4660328987406007230LL;
unsigned short var_11 = (unsigned short)33037;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 9693111612651428079ULL;
long long int var_17 = 1554163225310534183LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 6147127973706634464ULL;
short var_21 = (short)25189;
short var_22 = (short)5149;
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
