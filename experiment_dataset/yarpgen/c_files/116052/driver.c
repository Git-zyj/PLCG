#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7214907824024842963LL;
long long int var_8 = 4053951363033235360LL;
signed char var_9 = (signed char)77;
unsigned short var_12 = (unsigned short)61595;
unsigned long long int var_15 = 7365426562872089493ULL;
unsigned long long int var_17 = 9577419239877869834ULL;
int zero = 0;
short var_19 = (short)2060;
short var_20 = (short)32416;
long long int var_21 = -1861575903598923476LL;
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
