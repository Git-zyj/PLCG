#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
unsigned long long int var_3 = 14589126807340831257ULL;
long long int var_4 = 7802785901951460174LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 2315714330494334274LL;
int var_10 = -14799551;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)124;
unsigned long long int var_14 = 17573562792670807898ULL;
unsigned char var_15 = (unsigned char)74;
unsigned char var_16 = (unsigned char)2;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
