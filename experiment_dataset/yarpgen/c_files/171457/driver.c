#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)19236;
unsigned int var_6 = 1887539626U;
long long int var_10 = 5313910123092054509LL;
unsigned char var_14 = (unsigned char)80;
unsigned char var_16 = (unsigned char)186;
int zero = 0;
int var_17 = -9857743;
long long int var_18 = -7723840310322675912LL;
unsigned int var_19 = 1078369843U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
