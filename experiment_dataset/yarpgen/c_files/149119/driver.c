#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -880540006;
unsigned long long int var_4 = 18374699385855028141ULL;
long long int var_5 = -701229611410405809LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8702463605632014812LL;
unsigned long long int var_21 = 15971269055512243057ULL;
unsigned char var_22 = (unsigned char)81;
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
