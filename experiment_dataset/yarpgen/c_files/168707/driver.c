#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_7 = 1327248776;
short var_8 = (short)-27070;
unsigned int var_9 = 1282542197U;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
int var_19 = -1553620234;
long long int var_20 = 6965757517497462448LL;
unsigned short var_21 = (unsigned short)21044;
void init() {
}

void checksum() {
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
