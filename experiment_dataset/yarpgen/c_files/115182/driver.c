#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
long long int var_3 = 70209547109081026LL;
signed char var_4 = (signed char)-48;
unsigned char var_6 = (unsigned char)250;
signed char var_8 = (signed char)35;
signed char var_9 = (signed char)26;
unsigned int var_11 = 1595461063U;
signed char var_12 = (signed char)107;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
unsigned char var_14 = (unsigned char)137;
signed char var_15 = (signed char)115;
unsigned char var_16 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
