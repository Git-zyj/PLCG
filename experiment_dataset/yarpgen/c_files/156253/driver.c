#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -948653164;
unsigned char var_1 = (unsigned char)5;
int var_2 = 421211732;
unsigned char var_3 = (unsigned char)8;
unsigned char var_5 = (unsigned char)206;
long long int var_6 = 6714255655359365420LL;
signed char var_8 = (signed char)-97;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-15;
long long int var_15 = 2424796812137553352LL;
int zero = 0;
signed char var_16 = (signed char)-29;
unsigned char var_17 = (unsigned char)56;
long long int var_18 = -7142776076464777201LL;
signed char var_19 = (signed char)24;
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
