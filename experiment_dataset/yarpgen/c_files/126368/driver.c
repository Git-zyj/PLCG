#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)34671;
short var_6 = (short)11417;
signed char var_8 = (signed char)65;
short var_9 = (short)22090;
signed char var_10 = (signed char)-3;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 2441723684U;
int zero = 0;
signed char var_19 = (signed char)106;
long long int var_20 = 3481451576984715561LL;
long long int var_21 = -4967328182628909327LL;
signed char var_22 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
