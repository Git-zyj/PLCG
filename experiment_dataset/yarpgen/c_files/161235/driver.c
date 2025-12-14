#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)7;
long long int var_4 = 4040863526446295024LL;
unsigned long long int var_11 = 14325252036236656991ULL;
signed char var_12 = (signed char)-22;
int var_15 = 1796731489;
int var_16 = 1291331090;
int zero = 0;
unsigned short var_18 = (unsigned short)50960;
long long int var_19 = 4192932495124181435LL;
long long int var_20 = 5517973491932740155LL;
unsigned long long int var_21 = 8241500588906759020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
