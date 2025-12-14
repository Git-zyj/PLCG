#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18315;
signed char var_2 = (signed char)-66;
short var_3 = (short)-13890;
signed char var_5 = (signed char)-127;
short var_6 = (short)5936;
unsigned short var_11 = (unsigned short)9816;
short var_12 = (short)15647;
unsigned short var_16 = (unsigned short)56063;
int zero = 0;
signed char var_19 = (signed char)94;
short var_20 = (short)3052;
signed char var_21 = (signed char)-64;
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
