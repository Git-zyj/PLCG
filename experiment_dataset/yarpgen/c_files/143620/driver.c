#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10552135311112746313ULL;
int var_5 = -189913561;
int var_9 = -414117045;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 8781721937412553770ULL;
unsigned int var_14 = 272960403U;
int var_15 = -894189146;
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
