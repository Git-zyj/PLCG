#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2131;
unsigned int var_2 = 2833228082U;
unsigned int var_3 = 1309941961U;
long long int var_4 = 2620095777796742473LL;
unsigned long long int var_5 = 5952681317026400201ULL;
signed char var_6 = (signed char)74;
unsigned short var_7 = (unsigned short)41245;
unsigned long long int var_8 = 431258330527726169ULL;
unsigned int var_9 = 3150395207U;
int zero = 0;
long long int var_10 = -7098887830702744400LL;
signed char var_11 = (signed char)86;
signed char var_12 = (signed char)-79;
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
