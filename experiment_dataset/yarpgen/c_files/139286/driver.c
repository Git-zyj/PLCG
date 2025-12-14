#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38720;
unsigned short var_3 = (unsigned short)41977;
unsigned short var_7 = (unsigned short)18633;
unsigned long long int var_13 = 13307081364641892974ULL;
int zero = 0;
unsigned long long int var_16 = 18182717992641605298ULL;
unsigned long long int var_17 = 3212899467625331119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
