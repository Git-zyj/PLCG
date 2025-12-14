#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6468124487809548580LL;
unsigned char var_1 = (unsigned char)138;
signed char var_3 = (signed char)-14;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)101;
int var_11 = 965026881;
signed char var_12 = (signed char)-104;
int zero = 0;
signed char var_13 = (signed char)-11;
long long int var_14 = -5608028604837532013LL;
unsigned short var_15 = (unsigned short)8714;
unsigned short var_16 = (unsigned short)43000;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
