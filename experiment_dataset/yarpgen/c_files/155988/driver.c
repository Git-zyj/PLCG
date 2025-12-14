#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)180;
int var_8 = 136486742;
unsigned short var_9 = (unsigned short)51022;
unsigned short var_11 = (unsigned short)29658;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1547347147;
short var_14 = (short)28584;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
