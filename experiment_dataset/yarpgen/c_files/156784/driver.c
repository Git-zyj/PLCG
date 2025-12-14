#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 781011162U;
short var_1 = (short)-26723;
long long int var_3 = -5736514376302883178LL;
unsigned short var_8 = (unsigned short)9079;
unsigned long long int var_10 = 6326500184940992582ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)30576;
unsigned long long int var_13 = 6396812065589694748ULL;
long long int var_14 = -9212678816326568647LL;
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
