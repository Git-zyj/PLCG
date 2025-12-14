#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned char var_3 = (unsigned char)208;
unsigned short var_4 = (unsigned short)24258;
unsigned char var_6 = (unsigned char)121;
_Bool var_8 = (_Bool)1;
long long int var_10 = 8438643196246995571LL;
unsigned int var_12 = 2643649877U;
int zero = 0;
unsigned char var_18 = (unsigned char)255;
unsigned char var_19 = (unsigned char)182;
short var_20 = (short)22296;
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
