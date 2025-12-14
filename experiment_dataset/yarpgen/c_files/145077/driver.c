#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1740588351;
int var_1 = 414169216;
long long int var_4 = -6997697272949924812LL;
long long int var_6 = -8457758361680574596LL;
long long int var_7 = 2436053392665779595LL;
long long int var_9 = 1537836743855525558LL;
signed char var_14 = (signed char)-24;
int zero = 0;
int var_17 = 1231122740;
unsigned char var_18 = (unsigned char)24;
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
