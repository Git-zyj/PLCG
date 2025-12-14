#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)64;
long long int var_16 = -126684754410263667LL;
signed char var_18 = (signed char)-1;
int zero = 0;
unsigned int var_19 = 1551953200U;
unsigned short var_20 = (unsigned short)20204;
unsigned int var_21 = 513441536U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
