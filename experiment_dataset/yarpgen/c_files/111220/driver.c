#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4152988299800879838ULL;
unsigned long long int var_3 = 2768854078161649323ULL;
unsigned char var_19 = (unsigned char)250;
int zero = 0;
unsigned long long int var_20 = 4169970592773495176ULL;
short var_21 = (short)-28513;
unsigned long long int var_22 = 6395502729287145923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
