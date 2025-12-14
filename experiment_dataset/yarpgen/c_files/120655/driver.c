#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
_Bool var_3 = (_Bool)1;
long long int var_8 = -6056770456783346290LL;
unsigned int var_9 = 503013683U;
unsigned int var_10 = 697584073U;
unsigned long long int var_14 = 304725081400870119ULL;
int zero = 0;
signed char var_16 = (signed char)101;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)52427;
unsigned short var_19 = (unsigned short)50692;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
