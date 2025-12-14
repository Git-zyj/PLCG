#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23793;
short var_5 = (short)-11425;
signed char var_6 = (signed char)-28;
short var_7 = (short)-16383;
signed char var_9 = (signed char)-62;
unsigned char var_10 = (unsigned char)146;
short var_13 = (short)-19594;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)83;
signed char var_16 = (signed char)28;
unsigned int var_17 = 2117123724U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
