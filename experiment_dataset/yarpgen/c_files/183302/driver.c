#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5989;
long long int var_7 = -5042532242139209382LL;
long long int var_8 = 94805046553773865LL;
short var_10 = (short)-982;
int zero = 0;
unsigned short var_12 = (unsigned short)1263;
short var_13 = (short)-20006;
long long int var_14 = 6719587207395725719LL;
void init() {
}

void checksum() {
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
