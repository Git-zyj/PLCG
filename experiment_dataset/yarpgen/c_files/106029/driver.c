#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2444;
unsigned char var_4 = (unsigned char)87;
_Bool var_5 = (_Bool)1;
long long int var_11 = -8646062556288093896LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1367427667;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
