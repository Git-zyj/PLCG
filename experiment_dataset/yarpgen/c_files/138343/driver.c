#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -404890258;
unsigned int var_3 = 778890198U;
unsigned int var_4 = 3261154848U;
unsigned short var_5 = (unsigned short)6228;
unsigned short var_7 = (unsigned short)54657;
int var_8 = -997427831;
unsigned int var_10 = 477556837U;
int zero = 0;
unsigned long long int var_11 = 9242433486782581653ULL;
unsigned long long int var_12 = 1601796628332178528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
