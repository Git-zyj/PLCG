#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 562435383U;
short var_5 = (short)-26681;
short var_6 = (short)32482;
unsigned int var_7 = 2472380913U;
int zero = 0;
long long int var_12 = 9214098592795951750LL;
long long int var_13 = -99645029852142920LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)12089;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
