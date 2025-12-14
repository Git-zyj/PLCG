#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned char var_3 = (unsigned char)46;
_Bool var_4 = (_Bool)1;
int var_5 = 275644065;
unsigned char var_6 = (unsigned char)47;
unsigned char var_11 = (unsigned char)211;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)140;
_Bool var_21 = (_Bool)1;
int var_22 = -1523433925;
unsigned long long int var_23 = 4112311177031064726ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
