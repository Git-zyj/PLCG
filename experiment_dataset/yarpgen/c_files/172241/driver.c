#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2973548579U;
unsigned int var_6 = 216464412U;
unsigned long long int var_9 = 16410963752144705340ULL;
long long int var_10 = -5514210051717104681LL;
int zero = 0;
int var_12 = 762349238;
long long int var_13 = 4418629962952735875LL;
void init() {
}

void checksum() {
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
