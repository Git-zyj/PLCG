#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8076907291989087719ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)118;
signed char var_3 = (signed char)-18;
unsigned char var_5 = (unsigned char)211;
_Bool var_8 = (_Bool)1;
long long int var_10 = 7652516417218708294LL;
unsigned long long int var_11 = 12510401282760871428ULL;
int zero = 0;
unsigned long long int var_12 = 4434815413461773854ULL;
signed char var_13 = (signed char)98;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)66;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
