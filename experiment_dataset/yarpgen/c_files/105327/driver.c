#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4402989553273856573ULL;
unsigned short var_4 = (unsigned short)14370;
unsigned char var_9 = (unsigned char)166;
unsigned long long int var_10 = 11120892842521111322ULL;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
unsigned char var_12 = (unsigned char)7;
unsigned short var_13 = (unsigned short)54946;
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
