#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 618295506U;
unsigned short var_2 = (unsigned short)13916;
unsigned int var_3 = 1518731607U;
unsigned int var_7 = 2311909032U;
short var_8 = (short)29547;
unsigned long long int var_9 = 1707441765657766283ULL;
int zero = 0;
unsigned long long int var_11 = 11055868575033211365ULL;
long long int var_12 = 1769412087480706888LL;
long long int var_13 = -2975892808413292139LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
