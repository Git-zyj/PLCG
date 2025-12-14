#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3061044035051668483ULL;
unsigned int var_5 = 1406956670U;
unsigned short var_7 = (unsigned short)145;
int var_8 = -297597090;
long long int var_14 = -5752824268521499272LL;
unsigned char var_16 = (unsigned char)136;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)27;
unsigned long long int var_21 = 11769213819158537421ULL;
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
