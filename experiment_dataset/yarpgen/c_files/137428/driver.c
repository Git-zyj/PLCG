#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5524040383271433011LL;
unsigned char var_5 = (unsigned char)83;
int zero = 0;
unsigned short var_13 = (unsigned short)5321;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
