#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10801675467739512848ULL;
unsigned short var_2 = (unsigned short)24177;
unsigned long long int var_8 = 14765387584958592559ULL;
unsigned long long int var_9 = 7572147069092809800ULL;
unsigned short var_13 = (unsigned short)9920;
int var_14 = 960955701;
int zero = 0;
long long int var_17 = -9014271117862990179LL;
unsigned char var_18 = (unsigned char)173;
int var_19 = 2113230453;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
