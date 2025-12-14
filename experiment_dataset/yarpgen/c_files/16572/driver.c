#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)11942;
unsigned short var_10 = (unsigned short)5280;
unsigned short var_17 = (unsigned short)5143;
int zero = 0;
unsigned short var_18 = (unsigned short)32692;
unsigned short var_19 = (unsigned short)41213;
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
