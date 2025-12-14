#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 708307410;
signed char var_5 = (signed char)-119;
short var_7 = (short)-32692;
short var_9 = (short)19814;
short var_11 = (short)20255;
unsigned long long int var_13 = 641360388422113716ULL;
long long int var_16 = 8612056789300912885LL;
int zero = 0;
int var_17 = -1144472188;
int var_18 = -1979367161;
void init() {
}

void checksum() {
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
