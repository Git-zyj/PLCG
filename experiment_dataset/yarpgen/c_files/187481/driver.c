#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1983272147;
unsigned char var_1 = (unsigned char)131;
long long int var_2 = 3283228079934763840LL;
signed char var_3 = (signed char)55;
unsigned short var_5 = (unsigned short)40085;
int var_6 = 1584032374;
signed char var_7 = (signed char)-59;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-89;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
