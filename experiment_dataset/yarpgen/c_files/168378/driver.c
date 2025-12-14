#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32529;
unsigned char var_10 = (unsigned char)254;
unsigned short var_11 = (unsigned short)37366;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)14654;
int var_15 = 1394279801;
long long int var_16 = 9039254662206692926LL;
void init() {
}

void checksum() {
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
