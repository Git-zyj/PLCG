#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1829285592;
unsigned char var_8 = (unsigned char)219;
int var_10 = -894362192;
short var_11 = (short)24888;
signed char var_12 = (signed char)112;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 4085642506U;
long long int var_15 = 4768026747606205047LL;
int zero = 0;
signed char var_18 = (signed char)105;
unsigned long long int var_19 = 805467830077654307ULL;
unsigned char var_20 = (unsigned char)91;
void init() {
}

void checksum() {
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
