#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)43398;
signed char var_6 = (signed char)-82;
unsigned long long int var_11 = 12988355364182747011ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)7322;
unsigned char var_15 = (unsigned char)169;
unsigned long long int var_16 = 10613632458610710067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
