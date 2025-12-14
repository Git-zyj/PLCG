#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16710889117153583346ULL;
long long int var_1 = 3256490813234075952LL;
unsigned char var_2 = (unsigned char)131;
unsigned char var_3 = (unsigned char)178;
unsigned long long int var_4 = 17659119316525899164ULL;
unsigned long long int var_5 = 9003341041589168832ULL;
short var_8 = (short)-16991;
short var_9 = (short)22003;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)51;
short var_12 = (short)19570;
int zero = 0;
int var_13 = 1105243717;
long long int var_14 = -6615327667219540701LL;
long long int var_15 = -3988584681646195694LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
