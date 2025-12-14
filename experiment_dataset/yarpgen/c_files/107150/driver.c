#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2450533185006359044ULL;
signed char var_3 = (signed char)-13;
signed char var_4 = (signed char)-42;
long long int var_5 = -392340314140496433LL;
unsigned short var_7 = (unsigned short)9708;
long long int var_11 = 598653802328092628LL;
int zero = 0;
signed char var_15 = (signed char)7;
long long int var_16 = 2703439698643972748LL;
unsigned short var_17 = (unsigned short)40865;
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
