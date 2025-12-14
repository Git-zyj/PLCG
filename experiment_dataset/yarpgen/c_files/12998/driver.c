#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 72076788;
unsigned short var_3 = (unsigned short)63346;
unsigned long long int var_7 = 15011783484480009539ULL;
long long int var_10 = -2274737026278163894LL;
long long int var_12 = -3612207174991510583LL;
int zero = 0;
unsigned long long int var_15 = 15951212658507322915ULL;
unsigned short var_16 = (unsigned short)53588;
unsigned short var_17 = (unsigned short)51425;
int var_18 = -1348882073;
int var_19 = 1807001939;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
