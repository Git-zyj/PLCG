#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
long long int var_1 = -6087068822760536796LL;
signed char var_2 = (signed char)93;
short var_8 = (short)5881;
short var_9 = (short)-28674;
int zero = 0;
long long int var_10 = 2185242093424088034LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 978015001U;
unsigned char var_13 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
