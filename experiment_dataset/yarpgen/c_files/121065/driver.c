#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18970;
short var_4 = (short)-15974;
unsigned long long int var_7 = 4600229829938407398ULL;
unsigned int var_10 = 2150920565U;
int var_11 = 1180219730;
signed char var_12 = (signed char)-116;
short var_14 = (short)-11448;
unsigned long long int var_15 = 7377247023247911240ULL;
unsigned short var_16 = (unsigned short)32785;
signed char var_19 = (signed char)(-127 - 1);
int zero = 0;
long long int var_20 = 3529052464315612793LL;
int var_21 = -1268868929;
short var_22 = (short)10350;
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
