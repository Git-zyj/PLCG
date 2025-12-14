#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 490314747;
int var_2 = 1303186524;
unsigned int var_4 = 4015278372U;
unsigned int var_5 = 391217076U;
unsigned char var_6 = (unsigned char)16;
unsigned int var_7 = 2852702982U;
short var_9 = (short)-7056;
int var_10 = 321635239;
long long int var_12 = -6339820856926085029LL;
int var_14 = -470900002;
int zero = 0;
short var_15 = (short)-17641;
unsigned int var_16 = 2937949829U;
void init() {
}

void checksum() {
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
