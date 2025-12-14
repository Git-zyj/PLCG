#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
long long int var_3 = -3955968368444574766LL;
unsigned char var_4 = (unsigned char)38;
unsigned char var_8 = (unsigned char)211;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 16200158448929277548ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)219;
unsigned long long int var_18 = 4914166207394931957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
