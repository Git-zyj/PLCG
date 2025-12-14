#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1192793901;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)121;
long long int var_10 = -5387082160251819698LL;
signed char var_11 = (signed char)-4;
unsigned int var_13 = 2168359632U;
int var_14 = 795855466;
int zero = 0;
signed char var_18 = (signed char)-52;
signed char var_19 = (signed char)-22;
unsigned long long int var_20 = 626309876585576129ULL;
void init() {
}

void checksum() {
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
