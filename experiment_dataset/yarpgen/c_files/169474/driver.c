#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned int var_5 = 3951781403U;
unsigned short var_7 = (unsigned short)36754;
int zero = 0;
unsigned long long int var_15 = 10876835288216893951ULL;
long long int var_16 = 1800466439063398332LL;
int var_17 = -1100161843;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
