#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6749307875527219854LL;
unsigned short var_13 = (unsigned short)18494;
signed char var_14 = (signed char)94;
unsigned int var_15 = 4094675143U;
int zero = 0;
short var_17 = (short)-30111;
unsigned int var_18 = 158671991U;
long long int var_19 = -7544061870162779965LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-6484;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
