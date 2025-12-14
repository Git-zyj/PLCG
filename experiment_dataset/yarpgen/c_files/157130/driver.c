#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
short var_1 = (short)15709;
_Bool var_2 = (_Bool)1;
long long int var_4 = -8661346018665034314LL;
int var_6 = -467525222;
unsigned long long int var_8 = 7969360392345296462ULL;
signed char var_9 = (signed char)-64;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)23825;
unsigned char var_13 = (unsigned char)5;
unsigned char var_14 = (unsigned char)116;
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
