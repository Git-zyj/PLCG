#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 737245324;
unsigned short var_7 = (unsigned short)26656;
signed char var_9 = (signed char)-55;
int zero = 0;
signed char var_10 = (signed char)33;
unsigned long long int var_11 = 13280681805087311991ULL;
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
