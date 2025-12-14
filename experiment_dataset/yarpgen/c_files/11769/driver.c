#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8829568556024572847LL;
unsigned short var_3 = (unsigned short)27074;
signed char var_4 = (signed char)-68;
unsigned long long int var_8 = 7481567483260166271ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60430;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-22460;
long long int var_15 = -6564496007201576462LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
