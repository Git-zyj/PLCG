#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned char var_1 = (unsigned char)243;
int var_2 = -1572240471;
signed char var_4 = (signed char)-108;
signed char var_5 = (signed char)-40;
unsigned short var_6 = (unsigned short)47062;
unsigned long long int var_8 = 18159564861012003909ULL;
unsigned long long int var_9 = 1649378000224403525ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)28;
unsigned char var_13 = (unsigned char)93;
signed char var_14 = (signed char)-108;
unsigned long long int var_15 = 7715358778227517057ULL;
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
