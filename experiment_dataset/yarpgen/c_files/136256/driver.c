#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)145;
signed char var_12 = (signed char)60;
signed char var_13 = (signed char)28;
int zero = 0;
unsigned short var_20 = (unsigned short)55460;
int var_21 = 1340446453;
void init() {
}

void checksum() {
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
