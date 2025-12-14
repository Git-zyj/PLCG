#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6082885493568449629LL;
short var_1 = (short)7411;
unsigned char var_2 = (unsigned char)169;
signed char var_4 = (signed char)2;
signed char var_8 = (signed char)-92;
long long int var_10 = -4828179521381262827LL;
unsigned char var_12 = (unsigned char)228;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11315539035371398808ULL;
int zero = 0;
signed char var_17 = (signed char)-10;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12577122457570436292ULL;
int var_20 = -1063939364;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
