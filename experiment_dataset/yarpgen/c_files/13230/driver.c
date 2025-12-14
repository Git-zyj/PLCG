#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 374509946586724306LL;
long long int var_4 = 7726704192420275608LL;
long long int var_5 = -3162745491164840064LL;
long long int var_6 = -5147528616632394746LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3090483691U;
signed char var_10 = (signed char)116;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)25318;
signed char var_13 = (signed char)46;
unsigned int var_14 = 3058088654U;
int zero = 0;
short var_15 = (short)-14945;
unsigned int var_16 = 84333760U;
unsigned short var_17 = (unsigned short)38919;
long long int var_18 = 9083896715837703078LL;
long long int var_19 = 2889990275806337769LL;
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
