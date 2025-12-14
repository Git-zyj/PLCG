#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16806276616328935647ULL;
long long int var_2 = -8549764339324734249LL;
signed char var_3 = (signed char)10;
short var_4 = (short)-1856;
unsigned int var_6 = 3049459072U;
unsigned short var_8 = (unsigned short)23317;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3518592146U;
short var_11 = (short)14839;
signed char var_13 = (signed char)-18;
unsigned short var_14 = (unsigned short)30451;
unsigned long long int var_17 = 8249294092600673692ULL;
int zero = 0;
unsigned long long int var_20 = 4995146063693733878ULL;
int var_21 = 1281007721;
long long int var_22 = 2420796852844651772LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
