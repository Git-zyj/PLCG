#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1300281376;
short var_1 = (short)-23962;
long long int var_4 = 5719410750826599822LL;
unsigned short var_6 = (unsigned short)56379;
long long int var_7 = 6886262830562695540LL;
unsigned short var_10 = (unsigned short)36074;
unsigned short var_11 = (unsigned short)13660;
int zero = 0;
unsigned short var_12 = (unsigned short)27449;
int var_13 = 1453074889;
long long int var_14 = 8327150799199443396LL;
unsigned short var_15 = (unsigned short)59684;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
