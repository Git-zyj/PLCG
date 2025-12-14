#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
long long int var_11 = 3473397033823268441LL;
signed char var_14 = (signed char)-115;
int zero = 0;
long long int var_17 = -7602517134428963718LL;
unsigned short var_18 = (unsigned short)18684;
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
