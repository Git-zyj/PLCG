#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-13;
signed char var_4 = (signed char)87;
unsigned int var_8 = 4256903930U;
long long int var_9 = 7027588692402191595LL;
unsigned long long int var_11 = 7853574001851415632ULL;
signed char var_13 = (signed char)-23;
signed char var_15 = (signed char)-22;
long long int var_16 = -1934132352075410010LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8222075306062080741LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
