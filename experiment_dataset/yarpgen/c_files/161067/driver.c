#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2054710210548816974LL;
short var_5 = (short)7976;
unsigned int var_7 = 1189336290U;
long long int var_13 = 5035225837851063155LL;
int zero = 0;
unsigned short var_20 = (unsigned short)30798;
unsigned int var_21 = 1997816432U;
long long int var_22 = 5241947308421985822LL;
unsigned int var_23 = 2511003491U;
unsigned int var_24 = 4142502000U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
