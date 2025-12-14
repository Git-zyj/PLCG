#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
unsigned char var_5 = (unsigned char)89;
int var_7 = -29331614;
signed char var_11 = (signed char)62;
unsigned int var_16 = 3920369551U;
int zero = 0;
unsigned int var_19 = 3030451236U;
signed char var_20 = (signed char)-64;
int var_21 = 437929257;
int var_22 = 1531451502;
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
