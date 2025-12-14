#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20955;
unsigned char var_3 = (unsigned char)1;
long long int var_4 = 905961860804760321LL;
long long int var_11 = 6180948012468394722LL;
int zero = 0;
unsigned long long int var_16 = 13510346565227199064ULL;
unsigned short var_17 = (unsigned short)59328;
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
