#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5018210664699090309LL;
long long int var_1 = 5010209294058369349LL;
long long int var_5 = 6249792639814905797LL;
long long int var_11 = -6585981379494532299LL;
long long int var_13 = 5537987686103982158LL;
int zero = 0;
unsigned char var_20 = (unsigned char)86;
unsigned char var_21 = (unsigned char)189;
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
