#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
unsigned int var_2 = 133181844U;
long long int var_3 = 1943460946241919868LL;
_Bool var_6 = (_Bool)1;
short var_12 = (short)-10699;
unsigned char var_15 = (unsigned char)245;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-103;
unsigned char var_21 = (unsigned char)157;
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
