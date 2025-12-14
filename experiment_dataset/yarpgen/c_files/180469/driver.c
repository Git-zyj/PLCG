#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)47573;
unsigned int var_7 = 4179864729U;
unsigned int var_9 = 1780972937U;
unsigned char var_11 = (unsigned char)209;
int zero = 0;
unsigned int var_12 = 4200279270U;
unsigned int var_13 = 2079201989U;
short var_14 = (short)-28905;
unsigned int var_15 = 132336814U;
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
