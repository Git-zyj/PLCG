#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned short var_1 = (unsigned short)9626;
unsigned char var_3 = (unsigned char)255;
unsigned short var_4 = (unsigned short)25598;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)176;
long long int var_7 = 8767397777048521040LL;
int zero = 0;
unsigned int var_11 = 2376651199U;
long long int var_12 = 2994971918093524385LL;
unsigned char var_13 = (unsigned char)151;
unsigned char var_14 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
