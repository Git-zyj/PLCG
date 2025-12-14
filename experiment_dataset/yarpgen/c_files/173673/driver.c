#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7002126721797767275LL;
long long int var_3 = -4650850470803213869LL;
long long int var_6 = 4115428400747866700LL;
long long int var_9 = -6088816171381023558LL;
int zero = 0;
long long int var_10 = -5251289167186840463LL;
long long int var_11 = 8208602541099747590LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
