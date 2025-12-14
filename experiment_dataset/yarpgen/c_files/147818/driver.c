#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1544098839U;
unsigned char var_6 = (unsigned char)126;
unsigned int var_7 = 3308933925U;
short var_8 = (short)10325;
int var_9 = 1022428636;
unsigned int var_11 = 713515908U;
long long int var_12 = -94434364175017274LL;
int zero = 0;
int var_15 = 1523458392;
unsigned int var_16 = 1327050344U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
