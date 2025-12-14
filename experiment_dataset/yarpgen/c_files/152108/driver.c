#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -427790487;
unsigned long long int var_6 = 14630414433260942742ULL;
signed char var_8 = (signed char)-118;
int zero = 0;
unsigned long long int var_11 = 6699985456979072798ULL;
unsigned long long int var_12 = 4185658201306473493ULL;
short var_13 = (short)-20918;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
