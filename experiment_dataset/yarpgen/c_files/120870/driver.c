#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7665093061038144296ULL;
short var_7 = (short)29027;
long long int var_12 = -4185856011025832194LL;
short var_14 = (short)-21320;
unsigned int var_16 = 720002964U;
long long int var_19 = -8168511642600353054LL;
int zero = 0;
unsigned long long int var_20 = 1204733872312562140ULL;
signed char var_21 = (signed char)-29;
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
