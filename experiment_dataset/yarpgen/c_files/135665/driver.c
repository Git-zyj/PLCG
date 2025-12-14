#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
long long int var_4 = 4216947342939684112LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)23859;
long long int var_8 = 3844214042532815074LL;
long long int var_11 = 3593981144521433641LL;
short var_12 = (short)17121;
long long int var_13 = 2839753954320443913LL;
int zero = 0;
long long int var_15 = -6636509467156047329LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6160964514170758213ULL;
long long int var_18 = -3590987138576290742LL;
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
