#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9985;
short var_5 = (short)19836;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-59;
unsigned long long int var_18 = 1461044006245273410ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)207;
unsigned long long int var_20 = 15301807438176566407ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
