#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)8599;
signed char var_5 = (signed char)93;
unsigned long long int var_6 = 15439138679226798363ULL;
unsigned int var_7 = 1609560599U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 2991805026U;
unsigned char var_12 = (unsigned char)81;
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
