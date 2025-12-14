#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8371621225591708321LL;
unsigned short var_3 = (unsigned short)14436;
long long int var_5 = 6608142447110001399LL;
int var_9 = -119436126;
long long int var_10 = 8550349808965167744LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3601576797U;
unsigned char var_13 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
