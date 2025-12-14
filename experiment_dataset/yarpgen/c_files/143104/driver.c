#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)11;
unsigned int var_5 = 3804710462U;
int var_6 = 1942806669;
short var_7 = (short)21985;
unsigned char var_9 = (unsigned char)74;
long long int var_12 = -1874912100366214747LL;
unsigned int var_17 = 2902843066U;
int zero = 0;
signed char var_19 = (signed char)-112;
long long int var_20 = 7026656095961883527LL;
long long int var_21 = 9161493028491947185LL;
signed char var_22 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
