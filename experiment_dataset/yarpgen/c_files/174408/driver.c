#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3505982628659724184ULL;
long long int var_6 = -8409721308504169087LL;
signed char var_8 = (signed char)-114;
unsigned char var_10 = (unsigned char)146;
int var_15 = 1509288139;
int zero = 0;
int var_20 = 672593200;
unsigned long long int var_21 = 7905131018619514560ULL;
void init() {
}

void checksum() {
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
