#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55763;
long long int var_2 = -11920199451598068LL;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)162;
long long int var_12 = 2235416127943991471LL;
int zero = 0;
unsigned char var_16 = (unsigned char)102;
unsigned int var_17 = 1400463385U;
int var_18 = -1523296428;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
