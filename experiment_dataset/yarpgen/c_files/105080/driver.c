#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22314;
unsigned long long int var_1 = 14157561406431023307ULL;
int var_2 = -2038394874;
unsigned long long int var_4 = 16102294865796580675ULL;
unsigned char var_7 = (unsigned char)141;
short var_15 = (short)-11600;
short var_16 = (short)-7615;
int zero = 0;
unsigned long long int var_19 = 16865216857128111558ULL;
unsigned short var_20 = (unsigned short)8092;
signed char var_21 = (signed char)-26;
unsigned short var_22 = (unsigned short)24662;
void init() {
}

void checksum() {
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
