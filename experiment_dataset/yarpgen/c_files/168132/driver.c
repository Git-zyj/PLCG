#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)115;
unsigned long long int var_5 = 16651273872021059630ULL;
short var_10 = (short)-3494;
unsigned char var_11 = (unsigned char)170;
_Bool var_14 = (_Bool)1;
unsigned int var_18 = 3168237139U;
int zero = 0;
unsigned int var_20 = 3097337779U;
unsigned char var_21 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
