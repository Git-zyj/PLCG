#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
unsigned int var_4 = 3231038065U;
long long int var_5 = -8666926462397483439LL;
unsigned long long int var_7 = 14875755810577056678ULL;
unsigned short var_14 = (unsigned short)21654;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1895451823U;
int zero = 0;
int var_18 = -145756846;
unsigned char var_19 = (unsigned char)230;
unsigned char var_20 = (unsigned char)166;
long long int var_21 = 2711418044291858033LL;
signed char var_22 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
