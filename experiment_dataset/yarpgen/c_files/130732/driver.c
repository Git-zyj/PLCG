#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)60900;
signed char var_8 = (signed char)39;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1529067074;
unsigned int var_11 = 1042106166U;
short var_12 = (short)-25176;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
