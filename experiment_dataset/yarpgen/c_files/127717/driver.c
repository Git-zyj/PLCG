#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -141801621319139318LL;
unsigned char var_3 = (unsigned char)193;
unsigned long long int var_4 = 3729355878135053932ULL;
short var_9 = (short)-6250;
long long int var_12 = -3189268543021874183LL;
int zero = 0;
signed char var_13 = (signed char)98;
signed char var_14 = (signed char)-63;
void init() {
}

void checksum() {
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
