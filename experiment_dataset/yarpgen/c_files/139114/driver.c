#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1901333911;
short var_7 = (short)-9252;
long long int var_8 = -9040902799863116012LL;
unsigned long long int var_9 = 3817268078163549491ULL;
int zero = 0;
short var_10 = (short)858;
unsigned char var_11 = (unsigned char)73;
long long int var_12 = 1120479014511195755LL;
unsigned long long int var_13 = 14672186082861283079ULL;
int var_14 = -1561428624;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
