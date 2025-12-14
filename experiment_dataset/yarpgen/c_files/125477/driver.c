#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4294525427U;
unsigned long long int var_3 = 12727036318303556615ULL;
long long int var_6 = -1328008934471765666LL;
unsigned long long int var_14 = 13241931467219668780ULL;
int zero = 0;
unsigned int var_18 = 1703545454U;
unsigned int var_19 = 165005330U;
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
