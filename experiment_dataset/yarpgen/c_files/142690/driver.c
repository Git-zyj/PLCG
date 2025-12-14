#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8158274835966225732ULL;
unsigned short var_2 = (unsigned short)64001;
unsigned long long int var_3 = 2587609057203454057ULL;
unsigned short var_4 = (unsigned short)61735;
unsigned short var_10 = (unsigned short)27380;
int zero = 0;
unsigned long long int var_12 = 13111819474676002466ULL;
unsigned long long int var_13 = 17293240681820341089ULL;
unsigned long long int var_14 = 3504576672572208070ULL;
void init() {
}

void checksum() {
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
