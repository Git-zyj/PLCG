#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11120805866623195026ULL;
short var_6 = (short)20779;
long long int var_9 = -7051664013225630728LL;
unsigned long long int var_14 = 16524312434704690536ULL;
unsigned int var_17 = 2039166566U;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-118;
unsigned long long int var_21 = 14980441149747648663ULL;
unsigned int var_22 = 2573781947U;
short var_23 = (short)28721;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
