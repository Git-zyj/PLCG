#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5906373827812084318LL;
unsigned char var_13 = (unsigned char)22;
unsigned char var_14 = (unsigned char)162;
int zero = 0;
signed char var_17 = (signed char)-113;
long long int var_18 = -5038825223350478558LL;
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
