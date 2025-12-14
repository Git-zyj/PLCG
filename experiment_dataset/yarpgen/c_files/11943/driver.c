#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-399;
unsigned long long int var_2 = 11961776345817630131ULL;
unsigned long long int var_5 = 1956027210251557042ULL;
long long int var_7 = -307340535767127617LL;
unsigned int var_8 = 1028104837U;
unsigned int var_10 = 766896483U;
unsigned int var_12 = 2435559738U;
int zero = 0;
short var_17 = (short)-8876;
unsigned short var_18 = (unsigned short)64420;
unsigned short var_19 = (unsigned short)8419;
int var_20 = -404778497;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
