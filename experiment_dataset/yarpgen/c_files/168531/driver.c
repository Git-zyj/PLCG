#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
unsigned long long int var_4 = 8097761926202193620ULL;
signed char var_5 = (signed char)26;
unsigned char var_6 = (unsigned char)28;
unsigned long long int var_8 = 7540389321758761999ULL;
unsigned long long int var_15 = 3796367221166076893ULL;
int zero = 0;
long long int var_20 = -193826019668328267LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)59002;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
