#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38417;
unsigned char var_4 = (unsigned char)176;
unsigned short var_7 = (unsigned short)61307;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)25806;
unsigned char var_13 = (unsigned char)13;
unsigned long long int var_14 = 6536716498295674856ULL;
unsigned short var_15 = (unsigned short)38661;
unsigned char var_16 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
