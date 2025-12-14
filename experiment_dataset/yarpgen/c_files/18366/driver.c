#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
long long int var_1 = -4747316037169005950LL;
unsigned int var_2 = 4226802671U;
unsigned char var_3 = (unsigned char)86;
_Bool var_9 = (_Bool)1;
short var_10 = (short)25779;
unsigned short var_11 = (unsigned short)61454;
long long int var_13 = -2443840934619087355LL;
int zero = 0;
long long int var_14 = -2371904810520902476LL;
short var_15 = (short)2770;
void init() {
}

void checksum() {
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
