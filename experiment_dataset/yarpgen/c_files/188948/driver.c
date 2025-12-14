#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9179151801780620338LL;
unsigned int var_7 = 550247558U;
unsigned long long int var_12 = 12630166722908953924ULL;
unsigned long long int var_14 = 5011892224880271906ULL;
int zero = 0;
signed char var_17 = (signed char)-48;
long long int var_18 = -7743496494714021352LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
