#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6520000773783917397LL;
unsigned long long int var_3 = 2616945304437153231ULL;
long long int var_6 = -6731514478634752307LL;
long long int var_7 = 183240226672460971LL;
unsigned int var_9 = 603358528U;
unsigned char var_16 = (unsigned char)188;
int zero = 0;
long long int var_18 = 7775957895815858926LL;
signed char var_19 = (signed char)-126;
unsigned int var_20 = 1110937706U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
