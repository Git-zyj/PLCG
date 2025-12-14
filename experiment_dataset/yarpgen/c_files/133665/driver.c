#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32815;
long long int var_2 = 37189179392787373LL;
long long int var_6 = -5940998817677515551LL;
unsigned short var_8 = (unsigned short)6473;
int zero = 0;
long long int var_11 = -2621941796979925061LL;
long long int var_12 = -6077797325529186493LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
