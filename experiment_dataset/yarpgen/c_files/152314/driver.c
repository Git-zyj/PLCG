#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34992;
long long int var_8 = 8923053288062875166LL;
unsigned short var_9 = (unsigned short)12543;
unsigned short var_11 = (unsigned short)32082;
long long int var_13 = 2791412107386778439LL;
unsigned short var_14 = (unsigned short)57300;
int zero = 0;
unsigned char var_18 = (unsigned char)168;
unsigned short var_19 = (unsigned short)32649;
void init() {
}

void checksum() {
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
