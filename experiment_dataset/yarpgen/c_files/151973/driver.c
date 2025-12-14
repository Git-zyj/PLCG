#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)17669;
short var_6 = (short)-28182;
signed char var_7 = (signed char)-48;
unsigned char var_8 = (unsigned char)29;
short var_9 = (short)8736;
signed char var_10 = (signed char)-14;
unsigned short var_11 = (unsigned short)56476;
signed char var_12 = (signed char)57;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-15;
signed char var_16 = (signed char)-49;
short var_18 = (short)9219;
int zero = 0;
unsigned short var_19 = (unsigned short)44932;
unsigned short var_20 = (unsigned short)16510;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
