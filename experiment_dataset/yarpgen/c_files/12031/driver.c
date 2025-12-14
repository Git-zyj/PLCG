#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14787070466836889356ULL;
unsigned long long int var_3 = 8420708152109396655ULL;
unsigned long long int var_5 = 7639959138439349029ULL;
unsigned short var_6 = (unsigned short)39098;
unsigned short var_10 = (unsigned short)35763;
unsigned short var_11 = (unsigned short)18550;
unsigned char var_13 = (unsigned char)138;
short var_14 = (short)-26276;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)16069;
signed char var_17 = (signed char)-55;
int zero = 0;
int var_18 = -169548751;
short var_19 = (short)-24257;
unsigned short var_20 = (unsigned short)57093;
signed char var_21 = (signed char)86;
int var_22 = 160048229;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
