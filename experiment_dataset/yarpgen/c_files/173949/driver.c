#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4769;
unsigned char var_1 = (unsigned char)231;
long long int var_2 = -1592306149532307908LL;
unsigned char var_3 = (unsigned char)211;
int var_4 = -963382108;
short var_5 = (short)-14266;
short var_8 = (short)27722;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)1653;
long long int var_14 = 6084576249361336373LL;
void init() {
}

void checksum() {
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
