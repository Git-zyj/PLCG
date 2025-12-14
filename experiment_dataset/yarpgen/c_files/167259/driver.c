#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12685329714856151152ULL;
unsigned long long int var_4 = 4993226500406318843ULL;
unsigned long long int var_5 = 3371750562228832038ULL;
unsigned int var_6 = 4163589650U;
int zero = 0;
long long int var_11 = 7546259814358479073LL;
short var_12 = (short)12028;
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
