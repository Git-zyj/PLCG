#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
unsigned char var_2 = (unsigned char)156;
int var_4 = -1558016121;
long long int var_10 = -2061070953165057959LL;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)143;
int zero = 0;
unsigned int var_18 = 2511597075U;
unsigned short var_19 = (unsigned short)5680;
_Bool var_20 = (_Bool)1;
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
