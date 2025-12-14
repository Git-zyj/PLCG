#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -884263674;
unsigned char var_4 = (unsigned char)126;
int var_5 = -583018236;
short var_8 = (short)5934;
unsigned int var_9 = 2053880589U;
unsigned long long int var_11 = 8585052683447511904ULL;
short var_16 = (short)-19198;
int zero = 0;
signed char var_20 = (signed char)-2;
unsigned int var_21 = 2014678784U;
long long int var_22 = 8657246281879173792LL;
void init() {
}

void checksum() {
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
