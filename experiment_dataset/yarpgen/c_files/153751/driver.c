#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13845;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 6024409025089074567ULL;
unsigned short var_4 = (unsigned short)11775;
_Bool var_6 = (_Bool)1;
int var_7 = 746666308;
unsigned char var_10 = (unsigned char)254;
short var_11 = (short)-1362;
int zero = 0;
unsigned int var_13 = 331493075U;
int var_14 = 380160875;
void init() {
}

void checksum() {
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
