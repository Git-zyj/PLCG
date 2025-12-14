#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14043;
unsigned long long int var_2 = 7290665325901476474ULL;
unsigned long long int var_3 = 4111199426098939914ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 3706047879U;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_20 = (short)22213;
long long int var_21 = -1907936315958316768LL;
signed char var_22 = (signed char)27;
unsigned long long int var_23 = 78854528700988404ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
