#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2308216856899909851ULL;
unsigned long long int var_6 = 9905958570302437905ULL;
unsigned long long int var_8 = 6001363130639097845ULL;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
long long int var_11 = 7787934723863270872LL;
unsigned long long int var_12 = 2444109829029505137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
