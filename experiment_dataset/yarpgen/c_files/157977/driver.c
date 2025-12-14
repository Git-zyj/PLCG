#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8056328027029186015LL;
unsigned char var_1 = (unsigned char)107;
unsigned long long int var_2 = 8051667836237237944ULL;
unsigned char var_3 = (unsigned char)82;
unsigned char var_4 = (unsigned char)250;
unsigned int var_6 = 1058384448U;
signed char var_8 = (signed char)33;
signed char var_9 = (signed char)-45;
unsigned char var_10 = (unsigned char)177;
long long int var_12 = -3457536674076845162LL;
signed char var_13 = (signed char)-63;
int zero = 0;
int var_16 = 924681953;
int var_17 = -1670409124;
unsigned char var_18 = (unsigned char)137;
unsigned int var_19 = 7937211U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
