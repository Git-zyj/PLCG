#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4912787238190993514LL;
long long int var_2 = -728336597939596216LL;
signed char var_5 = (signed char)50;
int var_7 = -1119717050;
short var_11 = (short)-20047;
long long int var_12 = -4771120250843123153LL;
unsigned char var_13 = (unsigned char)54;
unsigned long long int var_14 = 12093046386202648095ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)109;
int zero = 0;
long long int var_19 = -1489268103065637930LL;
signed char var_20 = (signed char)-7;
short var_21 = (short)7796;
signed char var_22 = (signed char)-17;
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
