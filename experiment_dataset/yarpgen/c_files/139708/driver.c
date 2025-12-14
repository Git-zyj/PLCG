#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
int var_2 = -405298975;
unsigned char var_3 = (unsigned char)242;
unsigned int var_6 = 22399551U;
_Bool var_14 = (_Bool)1;
long long int var_17 = -9216930892849163582LL;
int zero = 0;
unsigned short var_18 = (unsigned short)38488;
long long int var_19 = 8115383135298936838LL;
short var_20 = (short)10151;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
