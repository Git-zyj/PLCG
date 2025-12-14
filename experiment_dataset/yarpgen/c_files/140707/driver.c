#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48490;
_Bool var_4 = (_Bool)0;
long long int var_6 = -703421135846373647LL;
short var_10 = (short)-23560;
unsigned short var_11 = (unsigned short)20938;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)52;
signed char var_14 = (signed char)-79;
unsigned char var_15 = (unsigned char)238;
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
