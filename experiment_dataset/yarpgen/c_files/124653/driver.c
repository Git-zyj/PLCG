#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1656733984;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)205;
unsigned long long int var_6 = 10857189163643478825ULL;
long long int var_7 = 6383247916465787617LL;
long long int var_8 = 7277029162948787825LL;
int zero = 0;
unsigned long long int var_11 = 853684970892758645ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1292616148;
void init() {
}

void checksum() {
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
