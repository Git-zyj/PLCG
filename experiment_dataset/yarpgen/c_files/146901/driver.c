#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3741353989575517574ULL;
short var_6 = (short)9488;
signed char var_15 = (signed char)105;
signed char var_16 = (signed char)-16;
int zero = 0;
unsigned long long int var_18 = 12641169439853908878ULL;
unsigned int var_19 = 4126908178U;
signed char var_20 = (signed char)31;
signed char var_21 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
