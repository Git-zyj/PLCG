#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -703440312;
unsigned short var_6 = (unsigned short)60340;
unsigned int var_9 = 498992732U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1135934643517205892LL;
int zero = 0;
unsigned short var_16 = (unsigned short)26318;
unsigned char var_17 = (unsigned char)149;
void init() {
}

void checksum() {
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
