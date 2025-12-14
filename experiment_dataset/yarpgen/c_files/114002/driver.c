#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21358;
unsigned short var_1 = (unsigned short)27439;
int var_2 = -1107756898;
unsigned short var_4 = (unsigned short)11642;
short var_6 = (short)-17710;
signed char var_8 = (signed char)-99;
unsigned char var_12 = (unsigned char)94;
int zero = 0;
int var_13 = -2007500172;
unsigned char var_14 = (unsigned char)12;
long long int var_15 = -1181078156546838853LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
