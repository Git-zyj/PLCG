#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-85;
unsigned char var_4 = (unsigned char)143;
long long int var_6 = 5745738926911635186LL;
signed char var_8 = (signed char)-25;
int zero = 0;
int var_12 = -287521574;
unsigned char var_13 = (unsigned char)155;
unsigned char var_14 = (unsigned char)234;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
