#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 42680361U;
unsigned long long int var_2 = 11854608241344120763ULL;
unsigned char var_7 = (unsigned char)154;
unsigned long long int var_11 = 7098829578046563262ULL;
unsigned int var_14 = 3030937234U;
unsigned long long int var_15 = 14768528654699462098ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)28104;
unsigned long long int var_17 = 4838375999173953634ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
