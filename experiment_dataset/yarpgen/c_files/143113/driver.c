#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-59;
unsigned char var_4 = (unsigned char)220;
int var_5 = -1441262046;
unsigned int var_6 = 879553391U;
int var_8 = 1736366604;
unsigned short var_9 = (unsigned short)21226;
unsigned long long int var_10 = 4252598166084581558ULL;
unsigned short var_11 = (unsigned short)58669;
long long int var_12 = 5102665843857139878LL;
unsigned int var_13 = 2309190073U;
signed char var_14 = (signed char)-97;
unsigned long long int var_15 = 11361537120829243386ULL;
unsigned long long int var_16 = 3077548159652624171ULL;
unsigned char var_18 = (unsigned char)146;
unsigned long long int var_19 = 17449987481516139652ULL;
int zero = 0;
int var_20 = -36494161;
unsigned int var_21 = 3706311646U;
unsigned long long int var_22 = 6272799135436667645ULL;
long long int var_23 = 6064043216007269680LL;
int var_24 = -934727220;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
