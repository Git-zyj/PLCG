#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28447;
unsigned long long int var_5 = 14653437971380998243ULL;
long long int var_7 = -4102394042376505370LL;
unsigned long long int var_8 = 14120534183261105397ULL;
int zero = 0;
long long int var_11 = -7891424360411468337LL;
int var_12 = 91981472;
signed char var_13 = (signed char)117;
unsigned int var_14 = 1222130852U;
unsigned short var_15 = (unsigned short)51728;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
