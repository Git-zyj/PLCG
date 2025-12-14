#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
unsigned short var_5 = (unsigned short)51369;
signed char var_7 = (signed char)-33;
unsigned long long int var_8 = 16127406461320704529ULL;
int zero = 0;
unsigned int var_10 = 825574742U;
signed char var_11 = (signed char)45;
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
