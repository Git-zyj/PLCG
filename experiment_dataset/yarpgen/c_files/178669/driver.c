#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 505502352701338950ULL;
unsigned char var_2 = (unsigned char)94;
unsigned long long int var_3 = 11880098311140556675ULL;
unsigned int var_8 = 4202132691U;
signed char var_10 = (signed char)6;
unsigned char var_12 = (unsigned char)85;
int zero = 0;
long long int var_15 = -895491861340010296LL;
signed char var_16 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
