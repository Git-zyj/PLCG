#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1629503299;
unsigned char var_5 = (unsigned char)183;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)-83;
long long int var_19 = 5424409957817641407LL;
int zero = 0;
unsigned char var_20 = (unsigned char)20;
unsigned char var_21 = (unsigned char)115;
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
