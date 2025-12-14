#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17681434170218034489ULL;
unsigned long long int var_4 = 8002835088056805201ULL;
unsigned int var_5 = 3493411718U;
unsigned int var_6 = 650976124U;
unsigned short var_7 = (unsigned short)23406;
unsigned char var_8 = (unsigned char)163;
int zero = 0;
signed char var_11 = (signed char)74;
unsigned short var_12 = (unsigned short)27769;
int var_13 = -1736577377;
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
