#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-109;
unsigned short var_11 = (unsigned short)31657;
unsigned long long int var_15 = 15827099813307496641ULL;
unsigned short var_16 = (unsigned short)5417;
int zero = 0;
unsigned long long int var_19 = 2320776586595939722ULL;
unsigned short var_20 = (unsigned short)59361;
unsigned long long int var_21 = 8729568846887323161ULL;
unsigned short var_22 = (unsigned short)2148;
signed char var_23 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
