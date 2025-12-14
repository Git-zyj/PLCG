#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1642743176U;
_Bool var_3 = (_Bool)0;
unsigned short var_14 = (unsigned short)9019;
int zero = 0;
unsigned char var_19 = (unsigned char)52;
short var_20 = (short)-20311;
short var_21 = (short)32514;
unsigned short var_22 = (unsigned short)15793;
unsigned short var_23 = (unsigned short)43898;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
