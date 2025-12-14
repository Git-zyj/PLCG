#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23547;
int var_5 = 2066514580;
unsigned long long int var_8 = 5050420837811101633ULL;
short var_12 = (short)16840;
int zero = 0;
unsigned long long int var_13 = 1927575175604459345ULL;
int var_14 = 400526948;
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
