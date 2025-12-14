#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)185;
unsigned long long int var_4 = 11430589204029050363ULL;
unsigned char var_9 = (unsigned char)23;
unsigned char var_10 = (unsigned char)112;
long long int var_11 = 9150349753501597010LL;
unsigned int var_15 = 740145234U;
long long int var_16 = -8715181359695256455LL;
unsigned char var_17 = (unsigned char)166;
int zero = 0;
unsigned short var_18 = (unsigned short)38634;
long long int var_19 = 8504876595683798711LL;
long long int var_20 = -8225342063450830649LL;
signed char var_21 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
