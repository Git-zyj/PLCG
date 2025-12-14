#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)55061;
unsigned char var_6 = (unsigned char)47;
int var_7 = -435410598;
int var_8 = 2081553075;
unsigned short var_9 = (unsigned short)1708;
int var_10 = 317014559;
unsigned int var_12 = 748580889U;
signed char var_14 = (signed char)-101;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 91051921;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7432518419792178904LL;
int var_20 = -1501605935;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
