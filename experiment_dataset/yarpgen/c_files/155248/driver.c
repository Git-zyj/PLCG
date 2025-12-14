#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12895972118510294254ULL;
long long int var_4 = 4060363687398583770LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_15 = 5077829419162190849LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13609021953556882720ULL;
long long int var_18 = 8374222475409571354LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
