#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_1 = (signed char)-114;
signed char var_2 = (signed char)-18;
signed char var_4 = (signed char)-120;
signed char var_5 = (signed char)39;
signed char var_6 = (signed char)17;
signed char var_7 = (signed char)-39;
signed char var_8 = (signed char)-66;
signed char var_9 = (signed char)17;
int zero = 0;
signed char var_10 = (signed char)35;
signed char var_11 = (signed char)113;
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
