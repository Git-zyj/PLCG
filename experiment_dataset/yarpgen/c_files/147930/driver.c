#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
short var_1 = (short)-8321;
short var_2 = (short)-24967;
short var_3 = (short)16613;
short var_6 = (short)7427;
short var_7 = (short)-19758;
short var_8 = (short)-26439;
short var_9 = (short)25091;
signed char var_10 = (signed char)84;
int zero = 0;
short var_14 = (short)-32285;
signed char var_15 = (signed char)-113;
void init() {
}

void checksum() {
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
