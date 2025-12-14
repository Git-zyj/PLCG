#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)160;
unsigned short var_6 = (unsigned short)22848;
unsigned long long int var_7 = 827217842448666934ULL;
long long int var_9 = 7788995081242883768LL;
int zero = 0;
int var_17 = -571778974;
unsigned char var_18 = (unsigned char)197;
short var_19 = (short)23068;
unsigned long long int var_20 = 8225774456199765176ULL;
unsigned int var_21 = 1665622585U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
