#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7825155785916051475LL;
short var_5 = (short)-27448;
short var_6 = (short)-21919;
signed char var_16 = (signed char)-106;
int zero = 0;
unsigned char var_19 = (unsigned char)35;
int var_20 = 615950536;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
