#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1333242003661365737LL;
short var_1 = (short)8860;
unsigned long long int var_3 = 15729516928353963436ULL;
short var_6 = (short)-6832;
signed char var_11 = (signed char)-110;
unsigned long long int var_12 = 6003188121801764956ULL;
unsigned char var_13 = (unsigned char)241;
unsigned char var_15 = (unsigned char)121;
int zero = 0;
short var_17 = (short)6960;
unsigned long long int var_18 = 1264231494851190676ULL;
unsigned int var_19 = 1544586982U;
short var_20 = (short)29203;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
