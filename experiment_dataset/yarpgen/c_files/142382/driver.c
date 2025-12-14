#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 921828091;
long long int var_1 = 6683615662915051347LL;
signed char var_6 = (signed char)-124;
int var_8 = -167654369;
int var_9 = -396624342;
short var_13 = (short)-17709;
int zero = 0;
unsigned int var_14 = 466571792U;
signed char var_15 = (signed char)-25;
void init() {
}

void checksum() {
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
