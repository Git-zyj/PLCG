#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7338232246460787298LL;
short var_2 = (short)20822;
short var_3 = (short)-1780;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 10335311024902712928ULL;
unsigned long long int var_16 = 13543193686952039137ULL;
int var_17 = -388177243;
int zero = 0;
signed char var_18 = (signed char)83;
short var_19 = (short)-26421;
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
