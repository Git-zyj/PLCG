#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5793752149314009280LL;
unsigned char var_4 = (unsigned char)164;
int var_6 = -164493312;
int var_7 = -434718063;
unsigned long long int var_8 = 2126040315469121975ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)33;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)43997;
_Bool var_13 = (_Bool)1;
int var_14 = 89170505;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
