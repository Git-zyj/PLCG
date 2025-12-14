#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 237936103465252393ULL;
unsigned long long int var_6 = 14791935727811341545ULL;
int var_9 = 923231644;
int var_14 = -646587468;
int var_16 = 1281512200;
int zero = 0;
signed char var_17 = (signed char)-12;
short var_18 = (short)-19877;
signed char var_19 = (signed char)27;
unsigned int var_20 = 1083021658U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
