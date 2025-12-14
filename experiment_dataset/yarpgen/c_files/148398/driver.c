#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
signed char var_1 = (signed char)-27;
unsigned long long int var_6 = 13008155943386577738ULL;
long long int var_8 = 8844447645097673760LL;
unsigned long long int var_10 = 18287122676820269452ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)53488;
long long int var_16 = -7846176738294410880LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
