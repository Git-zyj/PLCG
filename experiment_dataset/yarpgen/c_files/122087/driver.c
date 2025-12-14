#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18421;
long long int var_5 = 3541414189316790742LL;
signed char var_7 = (signed char)-6;
long long int var_17 = 5028062858874010020LL;
int zero = 0;
long long int var_19 = -6467811323388168891LL;
unsigned long long int var_20 = 9111299998670526929ULL;
long long int var_21 = 7960445348435469107LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
