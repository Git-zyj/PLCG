#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-64;
unsigned long long int var_4 = 6633828020485649590ULL;
signed char var_5 = (signed char)52;
int var_6 = -58413264;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
unsigned char var_10 = (unsigned char)154;
long long int var_11 = 2626792130020283339LL;
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
