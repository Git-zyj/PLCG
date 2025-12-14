#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
unsigned char var_8 = (unsigned char)163;
unsigned char var_12 = (unsigned char)150;
unsigned char var_18 = (unsigned char)31;
int zero = 0;
unsigned char var_19 = (unsigned char)7;
unsigned long long int var_20 = 6987178587320473328ULL;
unsigned long long int var_21 = 15053829791199391170ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
