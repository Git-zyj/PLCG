#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
unsigned int var_2 = 4146932181U;
long long int var_3 = -6276910569498659486LL;
signed char var_4 = (signed char)-86;
unsigned int var_8 = 1935851917U;
unsigned short var_9 = (unsigned short)34990;
int var_10 = 820260369;
unsigned char var_14 = (unsigned char)209;
int zero = 0;
long long int var_15 = 5291441641297822705LL;
unsigned long long int var_16 = 13693460556363661832ULL;
long long int var_17 = 2509302679982580624LL;
short var_18 = (short)7792;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
