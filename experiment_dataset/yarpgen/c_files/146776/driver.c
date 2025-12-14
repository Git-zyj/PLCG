#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 978258975U;
signed char var_5 = (signed char)-107;
unsigned short var_6 = (unsigned short)25819;
short var_8 = (short)-20775;
unsigned char var_9 = (unsigned char)6;
signed char var_11 = (signed char)-27;
short var_12 = (short)23683;
int zero = 0;
long long int var_15 = -4307748454887815523LL;
unsigned short var_16 = (unsigned short)57725;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
