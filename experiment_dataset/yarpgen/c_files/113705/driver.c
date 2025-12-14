#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7595801472605404509LL;
unsigned short var_5 = (unsigned short)33531;
unsigned int var_7 = 3903516249U;
long long int var_8 = 2763567258691715566LL;
long long int var_9 = 1247547982295893203LL;
int zero = 0;
unsigned short var_12 = (unsigned short)44191;
unsigned short var_13 = (unsigned short)40423;
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
