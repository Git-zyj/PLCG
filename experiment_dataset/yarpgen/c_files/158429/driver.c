#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1214219875;
unsigned char var_5 = (unsigned char)179;
unsigned short var_7 = (unsigned short)45065;
int var_8 = 32836583;
int var_10 = -1124286249;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)29;
int var_13 = -339289072;
long long int var_16 = -8792328970725335472LL;
long long int var_17 = 1414882303288707523LL;
int zero = 0;
signed char var_18 = (signed char)116;
unsigned long long int var_19 = 3845888396799364879ULL;
long long int var_20 = 2964809087485793051LL;
short var_21 = (short)-15118;
signed char var_22 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
