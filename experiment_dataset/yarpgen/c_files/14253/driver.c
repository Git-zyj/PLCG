#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3448876460U;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)31;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)14;
unsigned char var_8 = (unsigned char)103;
signed char var_9 = (signed char)-28;
signed char var_10 = (signed char)-18;
unsigned long long int var_11 = 883990407572418893ULL;
int zero = 0;
signed char var_13 = (signed char)-3;
unsigned char var_14 = (unsigned char)28;
unsigned char var_15 = (unsigned char)202;
void init() {
}

void checksum() {
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
