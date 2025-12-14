#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17562138863392071833ULL;
unsigned char var_2 = (unsigned char)106;
unsigned int var_5 = 1282676410U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)40139;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_13 = -7848328655544976779LL;
signed char var_14 = (signed char)-38;
int var_15 = 296567952;
int zero = 0;
short var_17 = (short)-27937;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
