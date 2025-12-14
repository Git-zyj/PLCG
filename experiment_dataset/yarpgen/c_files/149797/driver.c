#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 99874460U;
unsigned long long int var_2 = 9991739221410913324ULL;
int var_6 = -191966423;
int var_8 = -346760508;
signed char var_9 = (signed char)-66;
int zero = 0;
int var_10 = 1743531484;
long long int var_11 = -366330848506377789LL;
short var_12 = (short)29394;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
