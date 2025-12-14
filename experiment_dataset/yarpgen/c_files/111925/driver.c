#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 181944937;
int var_6 = 1123556138;
short var_10 = (short)-1526;
unsigned char var_19 = (unsigned char)251;
int zero = 0;
int var_20 = -1869344493;
int var_21 = 1672479842;
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
