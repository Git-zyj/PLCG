#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned long long int var_4 = 4090466640531250193ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -4045958387350196377LL;
unsigned short var_12 = (unsigned short)39569;
int zero = 0;
int var_19 = -1224629455;
unsigned char var_20 = (unsigned char)90;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
