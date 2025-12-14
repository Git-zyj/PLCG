#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3972273831617476771LL;
unsigned long long int var_1 = 10161546242012211020ULL;
short var_7 = (short)17304;
long long int var_9 = -6421605549208410131LL;
int zero = 0;
unsigned long long int var_11 = 13342767553096012194ULL;
short var_12 = (short)6811;
long long int var_13 = -93539325106349858LL;
short var_14 = (short)-29988;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
