#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7908601278092329658LL;
signed char var_2 = (signed char)-57;
short var_4 = (short)-19336;
unsigned short var_6 = (unsigned short)19902;
int zero = 0;
long long int var_10 = 8798814974975052462LL;
short var_11 = (short)-27249;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
