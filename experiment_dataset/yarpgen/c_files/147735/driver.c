#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4757440392291419510LL;
int var_3 = 37668317;
unsigned short var_4 = (unsigned short)14051;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_9 = -6573545796593564622LL;
unsigned long long int var_10 = 9433869404384831628ULL;
unsigned long long int var_11 = 10792863480979523252ULL;
int var_15 = -240328721;
unsigned short var_17 = (unsigned short)44371;
short var_18 = (short)18166;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2409770704455840204LL;
unsigned long long int var_21 = 9441118183718769305ULL;
signed char var_22 = (signed char)-107;
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
