#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5142;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)144;
int var_9 = 1811809056;
unsigned long long int var_11 = 5178400921256280940ULL;
unsigned long long int var_14 = 6237618481492949702ULL;
unsigned char var_16 = (unsigned char)84;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
short var_19 = (short)-31055;
unsigned long long int var_20 = 1181588461526930094ULL;
unsigned long long int var_21 = 16592700627894030841ULL;
long long int var_22 = 8107963062527539055LL;
void init() {
}

void checksum() {
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
