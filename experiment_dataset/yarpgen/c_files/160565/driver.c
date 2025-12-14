#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 849980146U;
signed char var_3 = (signed char)-77;
signed char var_4 = (signed char)90;
int var_5 = 1846041760;
long long int var_6 = -8039806298091878834LL;
signed char var_9 = (signed char)-14;
int zero = 0;
unsigned long long int var_12 = 12847060346269619869ULL;
signed char var_13 = (signed char)-80;
int var_14 = 967690477;
short var_15 = (short)28830;
int var_16 = 325669550;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
