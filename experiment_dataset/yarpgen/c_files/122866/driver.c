#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2487739907932743775LL;
short var_1 = (short)-1151;
unsigned short var_3 = (unsigned short)58644;
int var_6 = -1891713582;
int var_8 = -942205029;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-32413;
int zero = 0;
unsigned char var_13 = (unsigned char)190;
signed char var_14 = (signed char)-46;
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
