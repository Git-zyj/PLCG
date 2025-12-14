#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23327;
unsigned long long int var_1 = 5478949853019968298ULL;
unsigned long long int var_3 = 1577079196947922340ULL;
int var_4 = 1599652557;
int var_5 = -259779464;
unsigned int var_7 = 3269628265U;
unsigned long long int var_8 = 6739756823329964263ULL;
unsigned short var_9 = (unsigned short)17155;
long long int var_13 = 1056293971903201835LL;
int zero = 0;
int var_16 = -1931748487;
int var_17 = 1037478786;
int var_18 = -2091053214;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
