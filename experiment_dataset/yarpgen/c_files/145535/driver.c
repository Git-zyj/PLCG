#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
unsigned long long int var_3 = 16881349852770446144ULL;
unsigned char var_4 = (unsigned char)82;
_Bool var_5 = (_Bool)0;
long long int var_7 = 9151475046929761473LL;
long long int var_11 = 2735810260173902225LL;
long long int var_12 = 7742705030635782982LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)19855;
long long int var_15 = -6229484916300664352LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
