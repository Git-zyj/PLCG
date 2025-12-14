#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)23;
long long int var_5 = 3629533506337105065LL;
signed char var_7 = (signed char)125;
unsigned int var_8 = 2852471683U;
unsigned char var_9 = (unsigned char)113;
unsigned long long int var_12 = 6630731325132476128ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)61173;
int var_15 = -1384086100;
_Bool var_16 = (_Bool)0;
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
