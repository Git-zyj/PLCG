#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
unsigned short var_3 = (unsigned short)8242;
short var_5 = (short)29604;
long long int var_6 = 627267040994444633LL;
long long int var_7 = -5440910809016010017LL;
unsigned int var_8 = 3632983434U;
unsigned int var_10 = 852303015U;
int var_11 = 388445269;
int var_14 = -1819457590;
int zero = 0;
unsigned int var_17 = 2521880358U;
unsigned int var_18 = 3329275830U;
unsigned long long int var_19 = 18095254485646015755ULL;
unsigned int var_20 = 1047873378U;
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
