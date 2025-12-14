#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
signed char var_1 = (signed char)100;
short var_6 = (short)-7419;
signed char var_7 = (signed char)127;
signed char var_8 = (signed char)48;
short var_9 = (short)-16577;
short var_11 = (short)9974;
unsigned char var_14 = (unsigned char)227;
unsigned short var_16 = (unsigned short)55550;
short var_18 = (short)10345;
int zero = 0;
short var_19 = (short)-11322;
signed char var_20 = (signed char)-4;
signed char var_21 = (signed char)-80;
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
