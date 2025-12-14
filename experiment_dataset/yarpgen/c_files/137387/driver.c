#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 861537737;
int var_3 = -202816516;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)216;
unsigned short var_7 = (unsigned short)55343;
long long int var_9 = 5780193476208160499LL;
unsigned char var_12 = (unsigned char)216;
long long int var_13 = -1289362007663348274LL;
int zero = 0;
unsigned long long int var_15 = 5930690968322140538ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 1917822993071612809LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
