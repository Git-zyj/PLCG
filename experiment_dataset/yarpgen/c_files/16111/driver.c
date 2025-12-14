#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2964830841395876441LL;
long long int var_1 = -4445555190078797274LL;
unsigned int var_4 = 3475147811U;
unsigned long long int var_6 = 18066418143316796895ULL;
signed char var_11 = (signed char)20;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)172;
int zero = 0;
unsigned long long int var_16 = 8361136852516671833ULL;
int var_17 = 1656161236;
long long int var_18 = 2814401602036888605LL;
unsigned long long int var_19 = 8861936210636763364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
