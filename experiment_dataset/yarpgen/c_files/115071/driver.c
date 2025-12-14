#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -318199825;
long long int var_1 = 197691485189338762LL;
short var_2 = (short)-29618;
unsigned int var_3 = 2885593713U;
unsigned long long int var_5 = 5972248505734340548ULL;
short var_7 = (short)17036;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)60;
int zero = 0;
unsigned int var_13 = 2236085604U;
unsigned short var_14 = (unsigned short)28236;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
