#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12122513180778451345ULL;
unsigned long long int var_3 = 13316487603687468192ULL;
unsigned long long int var_12 = 5137904164160297370ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-21009;
unsigned int var_19 = 2095887196U;
void init() {
}

void checksum() {
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
