#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)19;
unsigned long long int var_5 = 15359483499924248410ULL;
long long int var_8 = -1909754722661286488LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)145;
unsigned long long int var_14 = 5469200833829570164ULL;
int zero = 0;
long long int var_19 = 5588553609361066015LL;
unsigned long long int var_20 = 4804708218405266864ULL;
_Bool var_21 = (_Bool)0;
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
