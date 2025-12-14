#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15181;
unsigned short var_3 = (unsigned short)38162;
unsigned short var_4 = (unsigned short)63357;
unsigned short var_5 = (unsigned short)6759;
unsigned long long int var_6 = 12080354364775374239ULL;
signed char var_8 = (signed char)-123;
int zero = 0;
short var_17 = (short)-2503;
unsigned short var_18 = (unsigned short)4681;
int var_19 = -1506455838;
int var_20 = 349875094;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
