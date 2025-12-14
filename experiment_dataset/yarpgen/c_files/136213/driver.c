#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2000872246097589016ULL;
unsigned int var_4 = 2544779286U;
unsigned long long int var_7 = 9430043584376445503ULL;
unsigned char var_8 = (unsigned char)9;
long long int var_9 = 6641464968767338900LL;
unsigned char var_10 = (unsigned char)125;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)137;
unsigned short var_14 = (unsigned short)710;
unsigned long long int var_15 = 16699183830625433421ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
