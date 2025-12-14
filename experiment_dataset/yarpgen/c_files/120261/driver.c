#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 159022418U;
unsigned int var_1 = 253591627U;
signed char var_2 = (signed char)5;
signed char var_3 = (signed char)-45;
unsigned int var_5 = 4130666443U;
unsigned short var_6 = (unsigned short)18007;
unsigned long long int var_7 = 12522688298082100521ULL;
int var_9 = 350036025;
int zero = 0;
unsigned long long int var_11 = 14452632983667493528ULL;
unsigned short var_12 = (unsigned short)60124;
short var_13 = (short)-21650;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
