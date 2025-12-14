#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3156118609U;
short var_4 = (short)-28001;
unsigned short var_6 = (unsigned short)30093;
int var_8 = 332177985;
long long int var_10 = 4338324610500102934LL;
int zero = 0;
signed char var_11 = (signed char)53;
signed char var_12 = (signed char)72;
unsigned int var_13 = 3149764285U;
short var_14 = (short)3226;
short var_15 = (short)15091;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
