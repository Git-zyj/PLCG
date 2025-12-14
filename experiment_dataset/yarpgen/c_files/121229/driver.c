#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1085327996U;
short var_1 = (short)-29919;
long long int var_2 = 5550313558922201756LL;
signed char var_4 = (signed char)72;
unsigned char var_7 = (unsigned char)108;
unsigned int var_12 = 3316059757U;
int var_14 = -249932805;
int zero = 0;
int var_16 = 1202272373;
int var_17 = 1998538252;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3395033817U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
