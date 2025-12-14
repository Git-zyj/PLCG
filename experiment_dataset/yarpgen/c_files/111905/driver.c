#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39070;
int var_2 = 397430881;
long long int var_12 = -3805360825716719188LL;
unsigned long long int var_14 = 5585855110818415822ULL;
unsigned long long int var_16 = 11225934857544538023ULL;
int zero = 0;
signed char var_19 = (signed char)-93;
int var_20 = -1732957314;
signed char var_21 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
