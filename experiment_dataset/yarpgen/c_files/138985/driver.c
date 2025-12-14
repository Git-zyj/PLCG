#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -2041616165;
long long int var_2 = -5443165292905112798LL;
short var_5 = (short)20572;
unsigned int var_6 = 1955715969U;
unsigned short var_10 = (unsigned short)46238;
unsigned short var_14 = (unsigned short)28719;
int zero = 0;
unsigned char var_16 = (unsigned char)134;
unsigned long long int var_17 = 10074954052719954558ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
