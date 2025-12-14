#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
short var_1 = (short)-26977;
short var_3 = (short)-29753;
int var_6 = -1218852562;
unsigned short var_7 = (unsigned short)747;
unsigned int var_8 = 152320158U;
long long int var_11 = -8033884660511780285LL;
long long int var_13 = 6443649876908886848LL;
int zero = 0;
unsigned short var_14 = (unsigned short)39833;
signed char var_15 = (signed char)-79;
long long int var_16 = -983719145935645639LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
