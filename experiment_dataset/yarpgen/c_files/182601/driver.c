#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15479593523302752373ULL;
int var_1 = 1057666887;
unsigned int var_5 = 784815325U;
signed char var_6 = (signed char)-26;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)8105;
signed char var_13 = (signed char)-121;
short var_15 = (short)18117;
unsigned short var_16 = (unsigned short)18907;
int zero = 0;
unsigned short var_18 = (unsigned short)46520;
short var_19 = (short)10573;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
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
