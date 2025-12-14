#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_8 = 195960389062303398LL;
int var_9 = -1654479193;
unsigned short var_10 = (unsigned short)51581;
int zero = 0;
int var_16 = 1509420060;
short var_17 = (short)-28332;
int var_18 = 2021158990;
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
