#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24151;
unsigned int var_4 = 3893707109U;
long long int var_7 = 6766862800386395049LL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)61;
unsigned short var_13 = (unsigned short)31422;
long long int var_14 = 5965563590012887174LL;
unsigned short var_15 = (unsigned short)44219;
unsigned short var_16 = (unsigned short)40716;
int zero = 0;
unsigned short var_19 = (unsigned short)48720;
signed char var_20 = (signed char)-102;
unsigned short var_21 = (unsigned short)6962;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
