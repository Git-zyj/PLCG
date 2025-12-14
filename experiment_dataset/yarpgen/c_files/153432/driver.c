#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)337;
unsigned int var_3 = 656242763U;
unsigned short var_4 = (unsigned short)25987;
unsigned long long int var_7 = 5494581111565355462ULL;
unsigned short var_9 = (unsigned short)64806;
unsigned long long int var_10 = 16756834243280390065ULL;
int zero = 0;
unsigned long long int var_14 = 1075992838103681349ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
