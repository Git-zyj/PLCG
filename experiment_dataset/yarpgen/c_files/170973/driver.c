#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5764517554466450636ULL;
unsigned int var_2 = 2634847909U;
unsigned int var_6 = 2563554284U;
short var_7 = (short)21955;
long long int var_13 = 8466020633646936091LL;
int zero = 0;
int var_18 = 358981302;
short var_19 = (short)-10301;
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
