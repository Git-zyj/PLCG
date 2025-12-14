#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4233146679U;
unsigned short var_3 = (unsigned short)907;
unsigned long long int var_5 = 15549060129881327113ULL;
unsigned long long int var_8 = 14238608253900794126ULL;
unsigned int var_10 = 1298761494U;
signed char var_13 = (signed char)-114;
int zero = 0;
unsigned long long int var_14 = 10895836551286111108ULL;
unsigned int var_15 = 640682449U;
unsigned short var_16 = (unsigned short)3163;
unsigned short var_17 = (unsigned short)20953;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
