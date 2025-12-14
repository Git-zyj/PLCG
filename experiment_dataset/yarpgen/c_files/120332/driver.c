#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)121;
int var_7 = 138073456;
unsigned char var_10 = (unsigned char)170;
signed char var_13 = (signed char)3;
unsigned char var_14 = (unsigned char)90;
signed char var_15 = (signed char)22;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-97;
signed char var_18 = (signed char)-10;
short var_19 = (short)-15206;
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
