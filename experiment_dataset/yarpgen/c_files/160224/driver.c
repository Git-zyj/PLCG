#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13631001818080718435ULL;
long long int var_5 = 4249055261983748967LL;
long long int var_6 = 979961754694560230LL;
signed char var_7 = (signed char)59;
short var_8 = (short)24298;
unsigned short var_9 = (unsigned short)14384;
int zero = 0;
unsigned long long int var_10 = 9505710367058040620ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
