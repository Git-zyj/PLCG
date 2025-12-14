#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1346209356392420522ULL;
unsigned int var_6 = 2225585841U;
unsigned short var_11 = (unsigned short)41424;
short var_13 = (short)14255;
unsigned int var_15 = 2026950611U;
int zero = 0;
long long int var_18 = -2585229324034761704LL;
unsigned long long int var_19 = 10694959910672481468ULL;
unsigned long long int var_20 = 9380285529797143648ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
