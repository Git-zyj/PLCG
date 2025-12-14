#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-22;
signed char var_2 = (signed char)-23;
signed char var_6 = (signed char)125;
signed char var_7 = (signed char)-74;
_Bool var_8 = (_Bool)0;
int var_9 = 1526557153;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-59;
signed char var_12 = (signed char)52;
signed char var_13 = (signed char)-38;
unsigned long long int var_14 = 2638892886022037818ULL;
signed char var_15 = (signed char)50;
int var_16 = 1200169438;
unsigned long long int var_17 = 14037845301266391833ULL;
unsigned short var_18 = (unsigned short)17004;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 931444685;
signed char var_22 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
