#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9026003737326443707LL;
unsigned char var_4 = (unsigned char)15;
int var_11 = 2086413360;
short var_15 = (short)-6853;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
signed char var_17 = (signed char)-47;
int var_18 = -831017433;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
