#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -823309592;
int var_4 = -1451912925;
int var_5 = -1541279018;
int var_6 = -1984011065;
int var_7 = 192540405;
int var_8 = 932876839;
int var_9 = -567690807;
int var_10 = -12229076;
int var_12 = -156337778;
int var_13 = 1356331318;
int zero = 0;
int var_14 = -1755022500;
int var_15 = -1442826130;
void init() {
}

void checksum() {
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
