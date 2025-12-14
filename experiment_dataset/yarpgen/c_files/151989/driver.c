#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1933846807;
short var_1 = (short)1700;
unsigned short var_8 = (unsigned short)24107;
long long int var_11 = -3092730382820570577LL;
unsigned char var_13 = (unsigned char)25;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
int var_20 = 114945913;
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
