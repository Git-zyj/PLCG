#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-81;
unsigned short var_8 = (unsigned short)22147;
signed char var_12 = (signed char)102;
unsigned char var_14 = (unsigned char)127;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-98;
int var_17 = 178502860;
signed char var_18 = (signed char)-51;
int zero = 0;
short var_20 = (short)-3099;
signed char var_21 = (signed char)-28;
short var_22 = (short)-15312;
long long int var_23 = 931376514103452943LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
