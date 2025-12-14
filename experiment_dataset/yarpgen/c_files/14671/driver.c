#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1237622380;
short var_13 = (short)-11483;
int var_14 = 722545622;
int zero = 0;
unsigned long long int var_19 = 16257793259700293614ULL;
unsigned long long int var_20 = 14377300295393244552ULL;
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
