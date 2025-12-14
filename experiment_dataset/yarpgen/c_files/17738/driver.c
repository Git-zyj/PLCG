#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
unsigned long long int var_6 = 9513302430859429724ULL;
unsigned char var_7 = (unsigned char)94;
int var_9 = 130810771;
unsigned long long int var_14 = 12424606973404076448ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)221;
unsigned short var_18 = (unsigned short)54145;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
