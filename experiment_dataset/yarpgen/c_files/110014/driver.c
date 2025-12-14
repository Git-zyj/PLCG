#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22203;
short var_1 = (short)20966;
long long int var_3 = -3988436299240635401LL;
unsigned long long int var_9 = 16661939653545874613ULL;
int zero = 0;
long long int var_17 = -4105554927117394039LL;
unsigned long long int var_18 = 18330088096084009846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
