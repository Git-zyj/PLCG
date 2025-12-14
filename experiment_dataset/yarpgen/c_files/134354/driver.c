#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-24609;
int zero = 0;
long long int var_15 = 1310459607655791890LL;
long long int var_16 = 277226733349530583LL;
unsigned char var_17 = (unsigned char)183;
signed char var_18 = (signed char)-45;
unsigned int var_19 = 2946849084U;
short var_20 = (short)-9797;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
