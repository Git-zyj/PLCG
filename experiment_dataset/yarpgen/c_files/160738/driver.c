#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9995275293932945473ULL;
long long int var_8 = -5740036206457832093LL;
long long int var_13 = 4254020743991496825LL;
short var_14 = (short)-18094;
int zero = 0;
unsigned long long int var_16 = 8857495129987433527ULL;
unsigned int var_17 = 1683050062U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
