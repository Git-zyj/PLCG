#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8657315076931878243LL;
unsigned char var_3 = (unsigned char)46;
_Bool var_4 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3138567769U;
int zero = 0;
short var_14 = (short)-19649;
unsigned short var_15 = (unsigned short)8398;
unsigned int var_16 = 4252736587U;
long long int var_17 = 371364664706653101LL;
int var_18 = 1547167491;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
