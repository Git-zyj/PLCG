#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1449168478966524920ULL;
unsigned long long int var_4 = 2197357602001613057ULL;
unsigned short var_8 = (unsigned short)2463;
int zero = 0;
unsigned long long int var_13 = 16035934027222652153ULL;
long long int var_14 = -7181144352682664411LL;
void init() {
}

void checksum() {
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
