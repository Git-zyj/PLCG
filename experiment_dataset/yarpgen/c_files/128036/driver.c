#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3265682166178824980ULL;
unsigned char var_3 = (unsigned char)125;
int var_6 = 2138004279;
long long int var_12 = -58095617975631480LL;
signed char var_13 = (signed char)121;
int zero = 0;
unsigned short var_17 = (unsigned short)52714;
_Bool var_18 = (_Bool)0;
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
