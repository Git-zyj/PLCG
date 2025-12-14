#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
short var_3 = (short)7291;
int var_4 = 1242351182;
signed char var_6 = (signed char)-79;
signed char var_7 = (signed char)-114;
unsigned long long int var_9 = 3906926144249533593ULL;
short var_10 = (short)-14074;
short var_11 = (short)-1729;
int zero = 0;
short var_13 = (short)22683;
unsigned int var_14 = 2651324535U;
unsigned long long int var_15 = 13973845571865671121ULL;
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
