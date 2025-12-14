#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4299;
unsigned long long int var_6 = 5232958232597169608ULL;
short var_7 = (short)-3314;
short var_10 = (short)-24635;
short var_11 = (short)-15782;
long long int var_16 = -8515276216640230494LL;
int zero = 0;
short var_17 = (short)28021;
int var_18 = -1283251873;
short var_19 = (short)-24532;
long long int var_20 = -3516514185929453982LL;
int var_21 = -1102511736;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
