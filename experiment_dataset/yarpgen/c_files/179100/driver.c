#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7879784509190746925ULL;
unsigned int var_6 = 4051814231U;
short var_7 = (short)-18835;
long long int var_10 = -1884019440158105937LL;
unsigned long long int var_11 = 9528909787886884944ULL;
int zero = 0;
long long int var_12 = 5599582218987885316LL;
long long int var_13 = -6952295668905566500LL;
long long int var_14 = -8374477971512622020LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
