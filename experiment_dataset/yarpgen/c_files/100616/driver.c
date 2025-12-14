#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4002094368716615961LL;
unsigned long long int var_3 = 15139588966484379986ULL;
unsigned int var_4 = 3258036871U;
long long int var_5 = -314516419762465522LL;
unsigned short var_14 = (unsigned short)13906;
int zero = 0;
long long int var_16 = 6534818949913183791LL;
unsigned int var_17 = 2115660734U;
long long int var_18 = -2144865296370075972LL;
unsigned int var_19 = 493945185U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
