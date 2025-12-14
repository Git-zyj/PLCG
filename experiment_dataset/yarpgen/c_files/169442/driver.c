#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1956272984146490515LL;
signed char var_5 = (signed char)-10;
short var_6 = (short)10154;
short var_7 = (short)-17025;
long long int var_9 = -7019379055803323674LL;
signed char var_10 = (signed char)50;
long long int var_11 = -277559285531986412LL;
short var_12 = (short)-9965;
long long int var_13 = -2822645068039287201LL;
long long int var_14 = 399663021121256628LL;
int zero = 0;
short var_15 = (short)-14852;
long long int var_16 = -3554785725326308568LL;
void init() {
}

void checksum() {
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
