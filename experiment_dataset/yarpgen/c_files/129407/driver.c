#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned short var_1 = (unsigned short)53097;
long long int var_2 = 4855025262080344879LL;
signed char var_3 = (signed char)-88;
unsigned short var_6 = (unsigned short)17163;
short var_7 = (short)-31119;
short var_8 = (short)25472;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 265287726U;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
unsigned short var_13 = (unsigned short)24079;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
