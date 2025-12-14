#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)1;
unsigned long long int var_4 = 18155400749984892064ULL;
unsigned char var_7 = (unsigned char)77;
long long int var_9 = -8350457937783007579LL;
int zero = 0;
short var_17 = (short)9617;
unsigned short var_18 = (unsigned short)28597;
short var_19 = (short)-4226;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
