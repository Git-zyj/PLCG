#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned short var_1 = (unsigned short)44408;
short var_2 = (short)9374;
short var_3 = (short)13776;
unsigned short var_4 = (unsigned short)49712;
unsigned char var_5 = (unsigned char)60;
long long int var_6 = -1489410362561496147LL;
short var_7 = (short)14670;
unsigned char var_11 = (unsigned char)120;
unsigned short var_12 = (unsigned short)23150;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)-24224;
long long int var_16 = 6364753989372960322LL;
long long int var_17 = -6356036030493028357LL;
unsigned long long int var_18 = 6440172903193111917ULL;
short var_19 = (short)23344;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
