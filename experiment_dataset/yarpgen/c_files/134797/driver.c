#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
unsigned char var_3 = (unsigned char)251;
_Bool var_6 = (_Bool)1;
long long int var_12 = 8765290556283475702LL;
signed char var_14 = (signed char)70;
int zero = 0;
unsigned short var_20 = (unsigned short)32448;
int var_21 = -649141415;
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
