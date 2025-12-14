#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45008;
unsigned long long int var_3 = 3130130210223286717ULL;
signed char var_4 = (signed char)-30;
long long int var_6 = 8837484041767913515LL;
int var_8 = 626949462;
int zero = 0;
long long int var_13 = -6599351361356158350LL;
long long int var_14 = 4642060499113107562LL;
long long int var_15 = -3216035097646927820LL;
void init() {
}

void checksum() {
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
