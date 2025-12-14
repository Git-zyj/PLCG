#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54047;
signed char var_3 = (signed char)88;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-12;
unsigned char var_9 = (unsigned char)101;
long long int var_11 = -2494454238281584456LL;
unsigned char var_12 = (unsigned char)151;
int zero = 0;
int var_13 = -1015400659;
signed char var_14 = (signed char)-67;
unsigned char var_15 = (unsigned char)197;
int var_16 = -143333301;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
