#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13479973615897544344ULL;
short var_13 = (short)27888;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 18258221095972883998ULL;
unsigned short var_19 = (unsigned short)5303;
unsigned char var_20 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
