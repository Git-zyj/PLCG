#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2546428541U;
int var_6 = 38261382;
signed char var_8 = (signed char)0;
int var_9 = 1590959629;
int var_12 = -1186849954;
signed char var_14 = (signed char)-109;
unsigned char var_16 = (unsigned char)90;
int var_17 = -72944727;
int zero = 0;
signed char var_18 = (signed char)-79;
long long int var_19 = 3080944652793306299LL;
unsigned char var_20 = (unsigned char)103;
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
