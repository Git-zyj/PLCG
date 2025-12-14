#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned int var_5 = 540384848U;
long long int var_6 = 4032227289948366930LL;
unsigned short var_15 = (unsigned short)14583;
int zero = 0;
int var_17 = 1356622912;
unsigned char var_18 = (unsigned char)117;
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
