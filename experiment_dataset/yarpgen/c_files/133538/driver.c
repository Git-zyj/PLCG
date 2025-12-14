#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 629932454U;
unsigned int var_1 = 1085420644U;
signed char var_6 = (signed char)-34;
signed char var_8 = (signed char)87;
long long int var_11 = 7834346282346117434LL;
unsigned short var_13 = (unsigned short)35362;
unsigned long long int var_14 = 13433482024696845910ULL;
unsigned short var_17 = (unsigned short)45982;
int var_18 = 1217426093;
long long int var_19 = -6423880297978474548LL;
int zero = 0;
unsigned char var_20 = (unsigned char)80;
long long int var_21 = -2191238831657684734LL;
unsigned int var_22 = 1293688712U;
void init() {
}

void checksum() {
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
