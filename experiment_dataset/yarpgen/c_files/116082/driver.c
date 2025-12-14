#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1191078930600133186ULL;
unsigned char var_4 = (unsigned char)137;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)71;
signed char var_8 = (signed char)0;
signed char var_9 = (signed char)-51;
int zero = 0;
unsigned char var_10 = (unsigned char)75;
unsigned long long int var_11 = 10201011865524671885ULL;
unsigned short var_12 = (unsigned short)21080;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
