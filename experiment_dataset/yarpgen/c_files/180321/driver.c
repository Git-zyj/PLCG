#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
signed char var_1 = (signed char)-56;
signed char var_2 = (signed char)-18;
signed char var_3 = (signed char)-117;
signed char var_4 = (signed char)85;
signed char var_5 = (signed char)108;
signed char var_7 = (signed char)-112;
signed char var_10 = (signed char)4;
signed char var_11 = (signed char)117;
signed char var_15 = (signed char)-119;
int zero = 0;
signed char var_18 = (signed char)13;
signed char var_19 = (signed char)-24;
signed char var_20 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
