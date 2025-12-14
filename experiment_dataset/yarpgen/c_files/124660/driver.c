#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
unsigned long long int var_1 = 15077770509687988043ULL;
unsigned char var_4 = (unsigned char)61;
short var_5 = (short)14557;
unsigned int var_8 = 398775172U;
unsigned char var_10 = (unsigned char)87;
unsigned short var_12 = (unsigned short)53187;
unsigned char var_13 = (unsigned char)67;
int zero = 0;
unsigned long long int var_17 = 10045982982227958411ULL;
long long int var_18 = 3430687003927394843LL;
unsigned long long int var_19 = 6664772572552459342ULL;
signed char var_20 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
