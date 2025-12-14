#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24827;
unsigned int var_1 = 1478172684U;
unsigned int var_2 = 18498281U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 648506832329815648ULL;
unsigned char var_7 = (unsigned char)137;
int var_8 = 1902823056;
unsigned short var_9 = (unsigned short)34914;
int var_11 = -1429350932;
int zero = 0;
unsigned short var_12 = (unsigned short)16428;
signed char var_13 = (signed char)-37;
unsigned short var_14 = (unsigned short)52914;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
