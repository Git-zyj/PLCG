#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3636329132U;
unsigned long long int var_2 = 3907617502601847983ULL;
short var_5 = (short)-12785;
unsigned char var_6 = (unsigned char)46;
unsigned int var_7 = 2980852950U;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3239201908324252518LL;
unsigned int var_13 = 3863518334U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
