#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_9 = (short)-16637;
unsigned char var_14 = (unsigned char)18;
int zero = 0;
short var_17 = (short)-31615;
unsigned char var_18 = (unsigned char)97;
unsigned long long int var_19 = 15567712416767310976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
