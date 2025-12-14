#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
long long int var_2 = 1441444655945941756LL;
unsigned char var_4 = (unsigned char)224;
unsigned short var_5 = (unsigned short)18977;
int var_7 = 1000079822;
_Bool var_9 = (_Bool)0;
int var_10 = 499414862;
int zero = 0;
unsigned short var_11 = (unsigned short)41914;
unsigned int var_12 = 3356104172U;
int var_13 = 1849771056;
signed char var_14 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
