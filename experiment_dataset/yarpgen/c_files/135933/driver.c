#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1359581284;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-31;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 3668623089728621385ULL;
short var_10 = (short)-2789;
int zero = 0;
unsigned long long int var_11 = 8426469344503056834ULL;
signed char var_12 = (signed char)2;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
