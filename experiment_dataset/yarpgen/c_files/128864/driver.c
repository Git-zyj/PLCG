#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19325;
signed char var_3 = (signed char)57;
signed char var_10 = (signed char)43;
long long int var_11 = 3185489902547674698LL;
int zero = 0;
int var_13 = -1748806069;
signed char var_14 = (signed char)-60;
long long int var_15 = 4445078707557340741LL;
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
