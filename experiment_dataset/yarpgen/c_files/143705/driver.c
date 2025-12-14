#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9037596481801412586LL;
long long int var_1 = -4781213226522968275LL;
unsigned char var_7 = (unsigned char)82;
unsigned long long int var_10 = 11355894581445620500ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29583;
long long int var_13 = -7317912983844231014LL;
unsigned char var_14 = (unsigned char)155;
int zero = 0;
unsigned long long int var_15 = 2355288478045108764ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
