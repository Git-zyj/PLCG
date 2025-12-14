#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2273630249U;
unsigned long long int var_4 = 8443894342881300550ULL;
unsigned char var_5 = (unsigned char)185;
int var_8 = -504093123;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1544626299U;
unsigned short var_11 = (unsigned short)53308;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9644504316243450444ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)179;
unsigned long long int var_19 = 8295246921243298601ULL;
unsigned short var_20 = (unsigned short)57652;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
