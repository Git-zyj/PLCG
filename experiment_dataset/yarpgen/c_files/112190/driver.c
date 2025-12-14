#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 784484427;
int var_1 = -1619425369;
int var_6 = -534357465;
unsigned short var_13 = (unsigned short)55204;
int zero = 0;
signed char var_18 = (signed char)98;
int var_19 = 1881721564;
void init() {
}

void checksum() {
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
