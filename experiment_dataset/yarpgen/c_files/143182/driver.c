#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5346100629071506720ULL;
unsigned short var_3 = (unsigned short)56540;
unsigned long long int var_4 = 12382559404223585453ULL;
unsigned short var_7 = (unsigned short)34227;
unsigned long long int var_8 = 7020503497320255010ULL;
unsigned long long int var_11 = 14871655781874007992ULL;
int zero = 0;
short var_12 = (short)1645;
unsigned short var_13 = (unsigned short)41591;
short var_14 = (short)-9084;
unsigned long long int var_15 = 9772399879238539435ULL;
unsigned short var_16 = (unsigned short)7820;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
