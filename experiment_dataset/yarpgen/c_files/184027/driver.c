#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8009188663446884795ULL;
signed char var_5 = (signed char)-6;
long long int var_6 = 4097156428243542230LL;
long long int var_8 = -5370963504003532040LL;
unsigned char var_9 = (unsigned char)194;
int zero = 0;
signed char var_10 = (signed char)-64;
unsigned char var_11 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
