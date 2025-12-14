#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13738633799836852522ULL;
short var_3 = (short)1152;
short var_4 = (short)19973;
int zero = 0;
unsigned short var_10 = (unsigned short)5677;
unsigned long long int var_11 = 5203930611155212183ULL;
short var_12 = (short)19500;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
