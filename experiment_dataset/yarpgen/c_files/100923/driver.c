#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1844446465420610766ULL;
int var_4 = -618179256;
long long int var_7 = 8236801229365200028LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -727739262581599038LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)6;
unsigned char var_20 = (unsigned char)145;
unsigned char var_21 = (unsigned char)183;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
