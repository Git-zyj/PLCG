#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
long long int var_1 = 1315831811014802229LL;
unsigned int var_4 = 216572640U;
int var_7 = 647257141;
unsigned short var_8 = (unsigned short)30499;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
unsigned short var_12 = (unsigned short)56562;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)23811;
long long int var_15 = 638526236903771475LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
