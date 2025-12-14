#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12441440423801118186ULL;
long long int var_9 = 2119582767460650191LL;
unsigned char var_10 = (unsigned char)89;
long long int var_11 = -8094211290581901330LL;
unsigned char var_12 = (unsigned char)114;
long long int var_13 = -6498159081294795796LL;
int var_15 = -1717254556;
unsigned char var_18 = (unsigned char)237;
short var_19 = (short)22548;
int zero = 0;
long long int var_20 = -1004775735283640420LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
