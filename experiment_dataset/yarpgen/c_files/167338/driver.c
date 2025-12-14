#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3666132503931098951ULL;
int var_2 = 1451466788;
unsigned int var_7 = 921598132U;
signed char var_8 = (signed char)-22;
short var_9 = (short)-31365;
int zero = 0;
unsigned int var_12 = 2522119674U;
short var_13 = (short)368;
long long int var_14 = 1397445508011867000LL;
unsigned long long int var_15 = 5491221403531746066ULL;
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
