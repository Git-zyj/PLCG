#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-34;
long long int var_3 = 9156212508763850486LL;
unsigned long long int var_7 = 5687134744862867454ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 8569992377066002577ULL;
int zero = 0;
int var_16 = -817025269;
unsigned char var_17 = (unsigned char)181;
unsigned char var_18 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
