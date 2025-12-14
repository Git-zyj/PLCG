#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned int var_4 = 3683652272U;
int var_5 = 1752433834;
signed char var_6 = (signed char)-73;
int var_7 = 164477599;
signed char var_8 = (signed char)-126;
signed char var_9 = (signed char)-55;
signed char var_10 = (signed char)-91;
int zero = 0;
int var_11 = -1985204106;
signed char var_12 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
