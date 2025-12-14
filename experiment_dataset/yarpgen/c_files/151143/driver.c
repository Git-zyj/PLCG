#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1258124266;
unsigned char var_5 = (unsigned char)154;
signed char var_6 = (signed char)-1;
unsigned char var_7 = (unsigned char)161;
short var_8 = (short)-30647;
unsigned int var_11 = 1582761043U;
unsigned char var_13 = (unsigned char)151;
unsigned int var_15 = 1868806825U;
long long int var_18 = 2436612908579308443LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)45356;
long long int var_21 = 7172720314914974371LL;
unsigned short var_22 = (unsigned short)40969;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
