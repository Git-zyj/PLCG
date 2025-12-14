#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
unsigned char var_4 = (unsigned char)60;
unsigned char var_7 = (unsigned char)227;
unsigned long long int var_8 = 14103630721173056111ULL;
unsigned long long int var_9 = 9542316662717101610ULL;
unsigned char var_10 = (unsigned char)156;
unsigned char var_11 = (unsigned char)118;
int var_14 = -694101791;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)123;
unsigned short var_19 = (unsigned short)12537;
int var_20 = 486846636;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
