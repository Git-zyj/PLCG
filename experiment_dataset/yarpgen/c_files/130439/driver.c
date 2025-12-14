#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22442;
unsigned long long int var_3 = 17436551564467340201ULL;
unsigned short var_5 = (unsigned short)48998;
signed char var_6 = (signed char)-90;
int var_9 = -2083485801;
signed char var_10 = (signed char)103;
unsigned int var_11 = 3436660801U;
short var_13 = (short)-29947;
int zero = 0;
short var_15 = (short)-24112;
long long int var_16 = -3510969658694067476LL;
unsigned short var_17 = (unsigned short)60188;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
