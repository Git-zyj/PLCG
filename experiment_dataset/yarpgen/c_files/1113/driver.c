#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6259;
short var_4 = (short)-18929;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)15618;
unsigned long long int var_14 = 16178589687268479683ULL;
int zero = 0;
int var_15 = 958618015;
long long int var_16 = -5968631752268866332LL;
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
