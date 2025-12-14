#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 942429894U;
unsigned int var_3 = 2997424070U;
unsigned char var_4 = (unsigned char)215;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_7 = 1596385001;
unsigned short var_9 = (unsigned short)3695;
int var_10 = 2001643194;
unsigned char var_11 = (unsigned char)115;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)72;
long long int var_15 = -4364018479617283502LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
