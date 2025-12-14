#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6808173154797605419LL;
_Bool var_1 = (_Bool)0;
int var_3 = 1278148468;
unsigned int var_4 = 1761694790U;
_Bool var_6 = (_Bool)0;
int var_8 = -470985491;
int var_9 = 89951791;
long long int var_10 = -6571852153652875944LL;
unsigned short var_11 = (unsigned short)17469;
int zero = 0;
unsigned long long int var_13 = 11057200448007931205ULL;
signed char var_14 = (signed char)44;
unsigned long long int var_15 = 13689975889587446909ULL;
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
