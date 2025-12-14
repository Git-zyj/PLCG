#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 859676528;
unsigned int var_1 = 4262540997U;
unsigned short var_2 = (unsigned short)2864;
unsigned short var_4 = (unsigned short)10644;
long long int var_6 = -4353375935035879918LL;
int zero = 0;
unsigned int var_11 = 391570407U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
