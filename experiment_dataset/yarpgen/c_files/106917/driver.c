#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1773;
signed char var_6 = (signed char)-6;
unsigned short var_9 = (unsigned short)57279;
int zero = 0;
unsigned long long int var_10 = 12363302063595566909ULL;
unsigned long long int var_11 = 13636466177480103128ULL;
unsigned long long int var_12 = 4209388509098605193ULL;
unsigned short var_13 = (unsigned short)36932;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
