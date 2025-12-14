#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)52748;
unsigned char var_9 = (unsigned char)135;
long long int var_13 = -2959788102133893499LL;
signed char var_14 = (signed char)-97;
int zero = 0;
signed char var_19 = (signed char)84;
unsigned long long int var_20 = 13333232586127497103ULL;
unsigned char var_21 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
