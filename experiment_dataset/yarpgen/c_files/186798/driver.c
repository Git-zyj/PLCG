#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
signed char var_1 = (signed char)125;
int var_3 = 542429325;
long long int var_5 = 3718184945757470396LL;
unsigned long long int var_6 = 5184167809733541231ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 283015037244208400ULL;
unsigned char var_10 = (unsigned char)45;
long long int var_16 = -142988837340827916LL;
int zero = 0;
signed char var_17 = (signed char)-64;
unsigned short var_18 = (unsigned short)1475;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 13713457718221005332ULL;
void init() {
}

void checksum() {
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
