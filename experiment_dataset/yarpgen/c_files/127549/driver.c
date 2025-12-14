#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 866427361;
unsigned short var_3 = (unsigned short)17168;
int var_9 = -592120564;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)31401;
short var_14 = (short)-27507;
unsigned short var_15 = (unsigned short)46712;
short var_17 = (short)584;
int zero = 0;
int var_20 = -469440058;
long long int var_21 = 2939463253071142261LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)41807;
unsigned short var_24 = (unsigned short)30784;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
