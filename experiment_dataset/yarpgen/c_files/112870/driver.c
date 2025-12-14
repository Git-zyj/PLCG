#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8888;
unsigned short var_2 = (unsigned short)17833;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)135;
unsigned short var_6 = (unsigned short)27007;
unsigned char var_8 = (unsigned char)155;
unsigned char var_9 = (unsigned char)106;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)231;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)217;
int var_17 = 1150163812;
void init() {
}

void checksum() {
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
