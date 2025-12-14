#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57677;
unsigned long long int var_5 = 8164860734867606208ULL;
unsigned int var_6 = 509378478U;
long long int var_9 = 6331115366673215263LL;
int zero = 0;
unsigned char var_10 = (unsigned char)13;
long long int var_11 = -1622017634136973181LL;
unsigned long long int var_12 = 4761057106485475900ULL;
long long int var_13 = -7710403889953015724LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
