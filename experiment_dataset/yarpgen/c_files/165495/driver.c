#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10297514507740559895ULL;
unsigned long long int var_1 = 4096483831549983342ULL;
unsigned long long int var_4 = 15802934692654719565ULL;
unsigned long long int var_5 = 9657956576220372724ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3244974851U;
int zero = 0;
unsigned long long int var_12 = 1196250919179811431ULL;
unsigned int var_13 = 4265125128U;
unsigned int var_14 = 2562067749U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
