#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8215975191643913017LL;
signed char var_3 = (signed char)67;
int var_5 = -480449416;
unsigned int var_8 = 4006755941U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)37700;
int zero = 0;
unsigned short var_14 = (unsigned short)27692;
short var_15 = (short)-26655;
signed char var_16 = (signed char)-117;
long long int var_17 = -136355850769303340LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
