#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -170625471;
unsigned int var_3 = 742237593U;
short var_4 = (short)-2948;
short var_5 = (short)27971;
unsigned int var_7 = 4189240888U;
unsigned long long int var_9 = 10044924227950832144ULL;
int var_10 = 499450698;
int zero = 0;
unsigned int var_11 = 3157224303U;
unsigned int var_12 = 2024659246U;
unsigned long long int var_13 = 7921050236518745359ULL;
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
