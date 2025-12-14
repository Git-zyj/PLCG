#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61625;
int var_3 = -1912226097;
long long int var_5 = 3342946304736282030LL;
int var_8 = 1656399557;
unsigned short var_9 = (unsigned short)38725;
int zero = 0;
unsigned char var_12 = (unsigned char)79;
unsigned char var_13 = (unsigned char)46;
void init() {
}

void checksum() {
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
