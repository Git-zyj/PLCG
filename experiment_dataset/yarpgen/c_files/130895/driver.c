#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1689874958U;
unsigned int var_3 = 2876117334U;
unsigned int var_4 = 1731325869U;
unsigned int var_5 = 2948598246U;
unsigned int var_11 = 2952074676U;
unsigned int var_13 = 3665031056U;
unsigned int var_14 = 3917375264U;
unsigned int var_17 = 2532994573U;
int zero = 0;
unsigned int var_18 = 3589720929U;
unsigned int var_19 = 2738969401U;
unsigned int var_20 = 1083491671U;
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
