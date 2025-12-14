#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1755974396;
int var_3 = -749044410;
unsigned short var_5 = (unsigned short)43576;
long long int var_7 = 8205294685540383643LL;
short var_8 = (short)-25436;
unsigned char var_12 = (unsigned char)194;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)28382;
int zero = 0;
short var_19 = (short)11105;
unsigned char var_20 = (unsigned char)222;
int var_21 = 2137643858;
_Bool var_22 = (_Bool)1;
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
