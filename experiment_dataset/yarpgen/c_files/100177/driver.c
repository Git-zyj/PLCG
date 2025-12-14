#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25926;
short var_8 = (short)-9433;
short var_9 = (short)-16373;
short var_10 = (short)12009;
short var_11 = (short)21489;
int zero = 0;
short var_12 = (short)-24411;
short var_13 = (short)-6452;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
