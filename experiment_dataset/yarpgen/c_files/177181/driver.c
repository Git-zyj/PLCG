#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
signed char var_2 = (signed char)-54;
unsigned short var_4 = (unsigned short)59746;
unsigned char var_11 = (unsigned char)217;
unsigned char var_12 = (unsigned char)76;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)36;
long long int var_15 = 1822119448291464077LL;
void init() {
}

void checksum() {
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
