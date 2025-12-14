#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8902796949614123647ULL;
long long int var_7 = 1947803475832471589LL;
unsigned int var_8 = 3262157492U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 7119644406444296414LL;
int zero = 0;
unsigned char var_14 = (unsigned char)11;
int var_15 = 1586477030;
long long int var_16 = -4613220591938559387LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
