#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 5345844721023006792ULL;
unsigned long long int var_12 = 17141371317757872218ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)24144;
unsigned long long int var_14 = 11857305844955726167ULL;
signed char var_15 = (signed char)-35;
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
