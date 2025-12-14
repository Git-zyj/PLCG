#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
short var_1 = (short)-25127;
int var_2 = 1675079799;
long long int var_5 = 2614885762807557831LL;
signed char var_6 = (signed char)8;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)63926;
long long int var_12 = 959494376724536749LL;
signed char var_13 = (signed char)-104;
unsigned long long int var_14 = 12215771361717908882ULL;
short var_16 = (short)-3547;
int zero = 0;
signed char var_20 = (signed char)27;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)142;
int var_23 = 189999119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
