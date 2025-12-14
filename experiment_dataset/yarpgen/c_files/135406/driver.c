#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1197159018U;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)62;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)81;
int var_5 = 643357062;
int var_6 = 1346411489;
long long int var_7 = 2514463691500917673LL;
unsigned long long int var_8 = 6508163865238175097ULL;
unsigned int var_9 = 425606894U;
int zero = 0;
int var_13 = 1416246046;
long long int var_14 = -621940125007194395LL;
unsigned long long int var_15 = 7994939095309674603ULL;
unsigned long long int var_16 = 8385292066232792565ULL;
unsigned int var_17 = 1419943108U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
