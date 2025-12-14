#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27320;
long long int var_6 = 5126065340490040946LL;
unsigned long long int var_7 = 14894925041790116144ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1926300134659416246LL;
short var_11 = (short)23408;
unsigned char var_12 = (unsigned char)151;
signed char var_14 = (signed char)106;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)47745;
unsigned int var_17 = 233486055U;
unsigned short var_18 = (unsigned short)56189;
unsigned short var_19 = (unsigned short)53850;
unsigned short var_20 = (unsigned short)34894;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
