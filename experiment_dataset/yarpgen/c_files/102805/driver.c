#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28546;
signed char var_3 = (signed char)-64;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)219;
_Bool var_13 = (_Bool)0;
signed char var_18 = (signed char)-78;
signed char var_19 = (signed char)91;
int zero = 0;
int var_20 = -2074785465;
unsigned short var_21 = (unsigned short)48293;
void init() {
}

void checksum() {
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
