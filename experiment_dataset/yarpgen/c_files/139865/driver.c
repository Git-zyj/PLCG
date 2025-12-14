#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3703371463U;
short var_4 = (short)-2103;
long long int var_6 = 4266597936760495411LL;
unsigned int var_9 = 1544976629U;
int var_12 = -1127280916;
int zero = 0;
unsigned short var_15 = (unsigned short)57398;
unsigned int var_16 = 3258969890U;
int var_17 = 637437151;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
