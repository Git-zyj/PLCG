#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1113611620;
unsigned long long int var_1 = 2615508348333983195ULL;
unsigned short var_2 = (unsigned short)39728;
int var_3 = -1837832716;
unsigned long long int var_5 = 11284110630019853409ULL;
unsigned short var_12 = (unsigned short)24252;
int zero = 0;
unsigned short var_15 = (unsigned short)40372;
unsigned long long int var_16 = 18046637032485712923ULL;
long long int var_17 = 5959611571138773309LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
