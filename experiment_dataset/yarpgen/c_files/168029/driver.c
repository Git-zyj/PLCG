#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2820561675U;
int var_2 = -974234922;
unsigned long long int var_3 = 12961315547378947550ULL;
int var_5 = 144214958;
_Bool var_6 = (_Bool)0;
int var_7 = -524460545;
unsigned char var_10 = (unsigned char)24;
unsigned long long int var_11 = 5890729570825696124ULL;
unsigned short var_13 = (unsigned short)5517;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
int var_15 = -1243879042;
unsigned int var_16 = 2842480948U;
void init() {
}

void checksum() {
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
