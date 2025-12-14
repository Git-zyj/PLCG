#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-25;
long long int var_7 = 655319763947029858LL;
long long int var_11 = 4535273537042021785LL;
int zero = 0;
unsigned long long int var_12 = 15306046940067266188ULL;
int var_13 = 1521406770;
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
