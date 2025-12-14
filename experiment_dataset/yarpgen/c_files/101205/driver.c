#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
long long int var_2 = -3588919611811803808LL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 153328200U;
unsigned int var_7 = 1479868131U;
int var_8 = -1507931151;
unsigned int var_9 = 1083595273U;
signed char var_10 = (signed char)-6;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)197;
int zero = 0;
int var_19 = -707022095;
int var_20 = -480191320;
signed char var_21 = (signed char)-21;
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
