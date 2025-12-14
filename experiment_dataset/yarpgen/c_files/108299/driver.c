#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 457609832415848428LL;
signed char var_6 = (signed char)27;
unsigned char var_8 = (unsigned char)236;
short var_11 = (short)-24885;
int zero = 0;
signed char var_20 = (signed char)-112;
unsigned int var_21 = 3233710310U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
