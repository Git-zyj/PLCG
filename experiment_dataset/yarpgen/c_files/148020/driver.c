#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30151;
signed char var_1 = (signed char)90;
unsigned char var_2 = (unsigned char)129;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)153;
long long int var_6 = -1381460044918069155LL;
long long int var_7 = -9164641118449214115LL;
long long int var_9 = 7429058060696561898LL;
int zero = 0;
signed char var_11 = (signed char)-32;
unsigned char var_12 = (unsigned char)96;
short var_13 = (short)230;
unsigned char var_14 = (unsigned char)192;
long long int var_15 = -4790062764245456541LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
