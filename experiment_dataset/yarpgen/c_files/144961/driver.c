#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
_Bool var_6 = (_Bool)0;
long long int var_11 = 4561987618377977900LL;
unsigned char var_12 = (unsigned char)72;
int zero = 0;
unsigned short var_13 = (unsigned short)2336;
unsigned short var_14 = (unsigned short)36590;
long long int var_15 = 5969960406652300811LL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
