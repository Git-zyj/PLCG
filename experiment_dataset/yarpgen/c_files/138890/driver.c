#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)9825;
signed char var_2 = (signed char)103;
signed char var_9 = (signed char)-6;
int var_13 = 2130012138;
int var_14 = 1942586093;
unsigned long long int var_16 = 14027359133858566439ULL;
int zero = 0;
unsigned int var_18 = 549972304U;
int var_19 = -444038225;
unsigned char var_20 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
