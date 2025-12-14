#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1299462618;
unsigned char var_5 = (unsigned char)67;
int var_16 = 538278545;
int zero = 0;
unsigned int var_19 = 648697537U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-39;
signed char var_22 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
