#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24580;
unsigned char var_3 = (unsigned char)91;
int var_7 = 1855033937;
unsigned char var_8 = (unsigned char)116;
unsigned short var_9 = (unsigned short)36972;
unsigned char var_12 = (unsigned char)183;
signed char var_13 = (signed char)-48;
signed char var_16 = (signed char)-18;
int zero = 0;
unsigned short var_18 = (unsigned short)64797;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)108;
unsigned int var_21 = 2045383293U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
