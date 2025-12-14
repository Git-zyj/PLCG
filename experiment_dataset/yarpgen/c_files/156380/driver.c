#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)117;
unsigned long long int var_4 = 13340490176706479652ULL;
unsigned short var_9 = (unsigned short)47391;
unsigned short var_11 = (unsigned short)4227;
long long int var_14 = 2402869993147079549LL;
long long int var_15 = 243137588287120792LL;
int zero = 0;
unsigned short var_20 = (unsigned short)24576;
unsigned long long int var_21 = 13122787566533633026ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
