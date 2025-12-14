#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
unsigned char var_3 = (unsigned char)38;
short var_8 = (short)11501;
unsigned short var_9 = (unsigned short)16903;
int zero = 0;
unsigned long long int var_20 = 17994668192042054562ULL;
unsigned long long int var_21 = 2838855538749800988ULL;
void init() {
}

void checksum() {
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
