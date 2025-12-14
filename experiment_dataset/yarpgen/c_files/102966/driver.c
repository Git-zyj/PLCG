#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4004514884993148410LL;
signed char var_5 = (signed char)94;
unsigned int var_9 = 3147956002U;
unsigned int var_15 = 2545050858U;
int var_18 = -1614977626;
int zero = 0;
short var_20 = (short)-26229;
unsigned int var_21 = 2297792637U;
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
