#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4290879321U;
int var_4 = 593746756;
unsigned int var_5 = 2565154813U;
long long int var_8 = -1069014656253892492LL;
int var_11 = -2016661833;
unsigned int var_13 = 3133039082U;
int var_15 = -134379645;
long long int var_16 = 402721001153179571LL;
int zero = 0;
signed char var_17 = (signed char)119;
int var_18 = 2098723858;
signed char var_19 = (signed char)21;
void init() {
}

void checksum() {
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
