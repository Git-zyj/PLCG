#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38486;
long long int var_4 = 3118812433598221256LL;
int var_7 = -1980623856;
int var_8 = -655601093;
unsigned int var_9 = 562011450U;
long long int var_12 = 6293531779855487892LL;
int zero = 0;
unsigned short var_18 = (unsigned short)7800;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
