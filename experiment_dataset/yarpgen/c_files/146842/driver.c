#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3414386299134758126LL;
unsigned char var_8 = (unsigned char)115;
_Bool var_9 = (_Bool)1;
long long int var_11 = 2451101072917239300LL;
unsigned int var_12 = 3451088039U;
int var_13 = -1500627389;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-82;
signed char var_19 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
