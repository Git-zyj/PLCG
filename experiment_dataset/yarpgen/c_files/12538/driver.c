#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)220;
unsigned long long int var_13 = 2298175239093995226ULL;
unsigned long long int var_15 = 12154126658034650450ULL;
int zero = 0;
unsigned long long int var_19 = 7422331039315265905ULL;
signed char var_20 = (signed char)107;
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
