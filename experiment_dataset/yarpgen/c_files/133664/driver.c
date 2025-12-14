#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3234214661U;
unsigned long long int var_1 = 12804166803973400612ULL;
long long int var_3 = 4817669062134853446LL;
unsigned int var_5 = 3802634628U;
unsigned short var_6 = (unsigned short)14460;
unsigned long long int var_7 = 16086929845253351445ULL;
unsigned char var_8 = (unsigned char)231;
unsigned char var_9 = (unsigned char)152;
int zero = 0;
signed char var_10 = (signed char)82;
unsigned short var_11 = (unsigned short)21015;
long long int var_12 = -891346005347633205LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
