#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31116;
int var_3 = 854224526;
unsigned long long int var_9 = 6524167776960563759ULL;
unsigned long long int var_16 = 656771724058694513ULL;
unsigned short var_17 = (unsigned short)49770;
int zero = 0;
int var_18 = -488729092;
unsigned int var_19 = 1844670353U;
_Bool var_20 = (_Bool)0;
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
