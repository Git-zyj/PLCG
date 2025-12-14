#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)45880;
short var_2 = (short)3334;
signed char var_4 = (signed char)-125;
unsigned long long int var_6 = 11337984652425543942ULL;
unsigned int var_7 = 3936679184U;
int var_8 = 1234983562;
unsigned long long int var_9 = 8169943586526375057ULL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -8444809107665183129LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)47;
unsigned int var_16 = 3259020871U;
int var_17 = 571910607;
unsigned int var_18 = 1706455254U;
void init() {
}

void checksum() {
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
