#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3506269665U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4800525864272726006LL;
unsigned char var_10 = (unsigned char)88;
unsigned long long int var_12 = 6622834572172994253ULL;
unsigned short var_13 = (unsigned short)31427;
unsigned long long int var_16 = 13031176047522488590ULL;
int zero = 0;
unsigned long long int var_18 = 2597474900066524450ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
