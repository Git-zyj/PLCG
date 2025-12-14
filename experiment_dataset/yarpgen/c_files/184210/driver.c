#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57223;
_Bool var_2 = (_Bool)1;
long long int var_3 = -8087152201163511930LL;
unsigned char var_5 = (unsigned char)135;
unsigned long long int var_8 = 16571934494633503562ULL;
int zero = 0;
unsigned long long int var_11 = 12593689405661388305ULL;
int var_12 = 1099825970;
void init() {
}

void checksum() {
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
