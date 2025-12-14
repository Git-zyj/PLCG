#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 147414645U;
signed char var_1 = (signed char)-11;
_Bool var_3 = (_Bool)1;
int var_5 = -899622603;
unsigned int var_7 = 397233022U;
unsigned long long int var_9 = 13219186819612490074ULL;
signed char var_12 = (signed char)119;
int var_13 = 344295516;
int zero = 0;
unsigned char var_14 = (unsigned char)105;
signed char var_15 = (signed char)-49;
unsigned short var_16 = (unsigned short)55316;
int var_17 = -1924146228;
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
