#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
unsigned char var_2 = (unsigned char)31;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)38749;
int var_7 = -1462476094;
long long int var_9 = 8967731249169745621LL;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
short var_12 = (short)-24022;
int var_13 = -1247660295;
long long int var_14 = -4679966056504006234LL;
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
