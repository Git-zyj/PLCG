#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18096970571194894641ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14202747963138100646ULL;
int var_8 = -823490317;
long long int var_13 = 306651484946969757LL;
int zero = 0;
unsigned short var_14 = (unsigned short)26658;
short var_15 = (short)14904;
unsigned long long int var_16 = 5045408755454453661ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
