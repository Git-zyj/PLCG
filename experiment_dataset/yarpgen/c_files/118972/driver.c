#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1534370783;
signed char var_1 = (signed char)66;
unsigned long long int var_2 = 1095869906248511164ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)20;
int var_9 = 691226324;
unsigned int var_11 = 3352936309U;
unsigned char var_12 = (unsigned char)41;
int zero = 0;
long long int var_13 = -2399885753658402153LL;
unsigned short var_14 = (unsigned short)11737;
unsigned int var_15 = 4038559274U;
void init() {
}

void checksum() {
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
