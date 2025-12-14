#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-93;
unsigned int var_3 = 3000941683U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 3890414240664751970ULL;
unsigned long long int var_8 = 13541440016866823853ULL;
unsigned short var_9 = (unsigned short)10740;
unsigned short var_10 = (unsigned short)2050;
int zero = 0;
long long int var_14 = -3967685220179413312LL;
int var_15 = -1417797055;
int var_16 = 993911852;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
