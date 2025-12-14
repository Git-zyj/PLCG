#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
_Bool var_4 = (_Bool)0;
long long int var_6 = 8964704784643421443LL;
short var_11 = (short)-26266;
int zero = 0;
unsigned long long int var_18 = 14997708357679601814ULL;
unsigned short var_19 = (unsigned short)2635;
void init() {
}

void checksum() {
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
