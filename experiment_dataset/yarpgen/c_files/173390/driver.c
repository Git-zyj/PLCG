#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
long long int var_3 = 7769264506634341014LL;
int var_6 = -1690296530;
unsigned char var_10 = (unsigned char)97;
unsigned long long int var_13 = 14063369512488138043ULL;
unsigned short var_14 = (unsigned short)4744;
unsigned long long int var_15 = 4959760207498374184ULL;
unsigned short var_16 = (unsigned short)62893;
unsigned long long int var_17 = 4582343167292654211ULL;
signed char var_19 = (signed char)-26;
int zero = 0;
unsigned short var_20 = (unsigned short)18232;
unsigned short var_21 = (unsigned short)52029;
long long int var_22 = 4755463658535957013LL;
void init() {
}

void checksum() {
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
