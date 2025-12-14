#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8259654224137892644LL;
unsigned long long int var_2 = 6115193075218550202ULL;
int var_4 = 2002195155;
long long int var_6 = 9184526122799225061LL;
unsigned short var_9 = (unsigned short)14329;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13628586919494628538ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
