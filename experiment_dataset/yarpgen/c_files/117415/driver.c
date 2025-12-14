#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41025;
long long int var_3 = 9154116988100187869LL;
_Bool var_7 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4164314447U;
unsigned char var_17 = (unsigned char)27;
int var_19 = -1242046351;
int zero = 0;
long long int var_20 = -1761974032543378532LL;
unsigned char var_21 = (unsigned char)62;
int var_22 = 177782329;
unsigned char var_23 = (unsigned char)40;
unsigned short var_24 = (unsigned short)33135;
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
