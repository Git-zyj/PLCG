#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
long long int var_3 = -8381692857655135437LL;
unsigned long long int var_5 = 2086753949682090625ULL;
short var_6 = (short)-10506;
int zero = 0;
unsigned char var_10 = (unsigned char)55;
short var_11 = (short)30788;
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
