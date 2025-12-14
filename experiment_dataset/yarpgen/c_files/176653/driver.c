#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58677;
unsigned short var_1 = (unsigned short)52472;
unsigned short var_2 = (unsigned short)5213;
unsigned char var_4 = (unsigned char)126;
unsigned long long int var_5 = 6355563938359956867ULL;
int var_6 = -176779683;
unsigned long long int var_7 = 6722384095173808326ULL;
unsigned long long int var_12 = 14842997176880791166ULL;
int zero = 0;
unsigned long long int var_13 = 2178045091594207355ULL;
unsigned char var_14 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
