#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3734197688661107074LL;
signed char var_2 = (signed char)2;
unsigned long long int var_3 = 3619815715034609799ULL;
signed char var_4 = (signed char)-11;
unsigned short var_5 = (unsigned short)854;
signed char var_8 = (signed char)70;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4190609219479940953ULL;
unsigned short var_11 = (unsigned short)39840;
unsigned short var_13 = (unsigned short)42463;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-11;
int zero = 0;
long long int var_16 = -7507598150256384201LL;
unsigned long long int var_17 = 5183473423885394571ULL;
unsigned long long int var_18 = 17131405637261111436ULL;
unsigned long long int var_19 = 15208063171828784591ULL;
void init() {
}

void checksum() {
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
