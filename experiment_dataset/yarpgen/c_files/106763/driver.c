#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
unsigned char var_1 = (unsigned char)151;
signed char var_2 = (signed char)38;
long long int var_4 = 6062358728877280559LL;
int var_5 = 1523914938;
int var_6 = 468638723;
unsigned char var_9 = (unsigned char)76;
unsigned long long int var_10 = 2650894267045651149ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 3089932044687412878ULL;
unsigned int var_13 = 1904620706U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2077640477U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
