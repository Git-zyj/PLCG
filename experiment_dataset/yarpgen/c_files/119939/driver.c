#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38844;
unsigned short var_4 = (unsigned short)46594;
long long int var_14 = 3526689443168607394LL;
long long int var_15 = 2023173493851630908LL;
unsigned short var_19 = (unsigned short)15720;
int zero = 0;
unsigned char var_20 = (unsigned char)59;
unsigned short var_21 = (unsigned short)62363;
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
