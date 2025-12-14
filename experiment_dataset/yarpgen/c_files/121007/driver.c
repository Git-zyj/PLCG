#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1731703113;
long long int var_5 = -7872859988951453339LL;
unsigned short var_8 = (unsigned short)5909;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)19;
int zero = 0;
short var_17 = (short)26592;
unsigned char var_18 = (unsigned char)7;
unsigned int var_19 = 3244484548U;
void init() {
}

void checksum() {
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
