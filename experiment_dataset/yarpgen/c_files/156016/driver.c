#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18047;
unsigned short var_1 = (unsigned short)14164;
long long int var_3 = -5241247193345818281LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_10 = 283192349093802433ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 2787505963U;
int zero = 0;
unsigned char var_15 = (unsigned char)133;
int var_16 = -931591909;
unsigned int var_17 = 3580147080U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
