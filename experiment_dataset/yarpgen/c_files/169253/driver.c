#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2267633221609988717ULL;
unsigned short var_2 = (unsigned short)31110;
unsigned short var_3 = (unsigned short)58248;
unsigned char var_8 = (unsigned char)66;
int var_9 = -334894093;
unsigned int var_15 = 911267200U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12088009065754446655ULL;
void init() {
}

void checksum() {
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
