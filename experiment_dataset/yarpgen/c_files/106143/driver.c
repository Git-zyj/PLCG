#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32208;
short var_1 = (short)-26794;
short var_3 = (short)-8159;
short var_5 = (short)9370;
short var_8 = (short)-1509;
long long int var_11 = -1359380671842771934LL;
short var_13 = (short)-26537;
int zero = 0;
unsigned char var_14 = (unsigned char)215;
unsigned char var_15 = (unsigned char)178;
_Bool var_16 = (_Bool)1;
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
