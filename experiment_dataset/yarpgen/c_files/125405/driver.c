#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned char var_2 = (unsigned char)209;
int var_4 = -1440066339;
unsigned int var_5 = 3897261213U;
unsigned char var_7 = (unsigned char)98;
unsigned char var_10 = (unsigned char)121;
int zero = 0;
signed char var_18 = (signed char)-95;
int var_19 = -599381117;
unsigned int var_20 = 2538579761U;
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
