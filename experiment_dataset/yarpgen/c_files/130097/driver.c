#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1520;
unsigned char var_5 = (unsigned char)198;
unsigned short var_6 = (unsigned short)18216;
signed char var_7 = (signed char)-108;
unsigned long long int var_10 = 5810192583567886921ULL;
int zero = 0;
long long int var_12 = -275676199769017969LL;
unsigned long long int var_13 = 6291670033075609346ULL;
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
