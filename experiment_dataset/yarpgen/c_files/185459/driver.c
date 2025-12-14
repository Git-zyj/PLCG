#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11459047672194218498ULL;
unsigned int var_1 = 548167348U;
unsigned int var_2 = 2774589413U;
short var_4 = (short)15374;
unsigned int var_6 = 3277170077U;
unsigned char var_7 = (unsigned char)1;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
unsigned long long int var_10 = 16170263605907304434ULL;
long long int var_11 = 7277255869047772122LL;
long long int var_12 = 5266373121766270550LL;
long long int var_13 = -3659229635104394192LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
