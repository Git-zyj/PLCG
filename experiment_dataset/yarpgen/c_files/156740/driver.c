#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 145269897882663763ULL;
long long int var_1 = 4189126078761784610LL;
short var_5 = (short)4264;
unsigned char var_8 = (unsigned char)191;
int zero = 0;
signed char var_11 = (signed char)5;
unsigned short var_12 = (unsigned short)19469;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
