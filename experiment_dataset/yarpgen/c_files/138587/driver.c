#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -235159189;
short var_2 = (short)31420;
signed char var_5 = (signed char)-76;
int var_6 = -966557585;
long long int var_10 = 6229478626643780461LL;
long long int var_11 = -4606406937475242993LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int var_14 = 1937294798;
int zero = 0;
unsigned int var_15 = 326825144U;
int var_16 = -1581380980;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 18142086040903408738ULL;
unsigned long long int var_19 = 275970942482051259ULL;
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
