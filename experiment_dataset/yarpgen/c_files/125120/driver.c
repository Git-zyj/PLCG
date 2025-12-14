#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3194341655U;
unsigned int var_2 = 127044548U;
unsigned char var_6 = (unsigned char)83;
unsigned int var_7 = 2854606296U;
unsigned char var_10 = (unsigned char)216;
int var_13 = -461404153;
unsigned short var_14 = (unsigned short)29842;
unsigned long long int var_15 = 12700348026457456955ULL;
int zero = 0;
int var_18 = -1717487972;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
