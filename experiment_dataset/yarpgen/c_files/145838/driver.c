#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-64;
unsigned int var_10 = 1196708711U;
unsigned long long int var_14 = 12541081493634630644ULL;
int var_15 = -1404365513;
int zero = 0;
int var_19 = 445588370;
short var_20 = (short)-9038;
void init() {
}

void checksum() {
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
