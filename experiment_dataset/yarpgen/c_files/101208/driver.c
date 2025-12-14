#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-74;
_Bool var_2 = (_Bool)0;
int var_3 = 1280392780;
unsigned short var_5 = (unsigned short)31413;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)43;
signed char var_8 = (signed char)22;
unsigned int var_11 = 2102323955U;
int zero = 0;
int var_12 = 527170002;
int var_13 = -1753446286;
int var_14 = 1152825759;
_Bool var_15 = (_Bool)1;
short var_16 = (short)17782;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
