#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)239;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)182;
long long int var_15 = 4668214105462175515LL;
unsigned long long int var_17 = 1399248801792083342ULL;
int zero = 0;
unsigned int var_18 = 1119485711U;
unsigned short var_19 = (unsigned short)46144;
long long int var_20 = -6920163847019137597LL;
unsigned int var_21 = 1487910477U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
