#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3350580221U;
short var_1 = (short)-30014;
unsigned int var_7 = 4030301145U;
short var_8 = (short)-11824;
short var_9 = (short)-31633;
short var_11 = (short)26812;
int zero = 0;
short var_12 = (short)-25370;
short var_13 = (short)31579;
unsigned int var_14 = 3913993633U;
unsigned int var_15 = 3089021541U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
