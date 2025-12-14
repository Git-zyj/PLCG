#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -635782121;
int var_2 = -461978082;
long long int var_3 = -2764156267473164990LL;
unsigned long long int var_8 = 6934537870889216732ULL;
unsigned char var_10 = (unsigned char)184;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)44392;
unsigned short var_19 = (unsigned short)97;
unsigned char var_20 = (unsigned char)16;
unsigned char var_21 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
