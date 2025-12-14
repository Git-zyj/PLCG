#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6601866973011460536LL;
short var_2 = (short)20043;
long long int var_4 = 7833329929301950521LL;
unsigned char var_7 = (unsigned char)207;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3687982885U;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
signed char var_11 = (signed char)121;
short var_12 = (short)-4271;
unsigned short var_13 = (unsigned short)30778;
unsigned int var_14 = 2646361474U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
