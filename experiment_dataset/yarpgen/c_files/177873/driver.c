#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3494294593474687036LL;
unsigned short var_4 = (unsigned short)16368;
_Bool var_5 = (_Bool)0;
long long int var_6 = 2501181455880776369LL;
int var_9 = 1480705837;
unsigned short var_12 = (unsigned short)25643;
unsigned short var_13 = (unsigned short)31659;
signed char var_14 = (signed char)57;
int zero = 0;
signed char var_17 = (signed char)39;
short var_18 = (short)-20581;
short var_19 = (short)-9731;
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
