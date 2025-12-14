#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = 6801316544870132305LL;
_Bool var_9 = (_Bool)1;
int var_12 = -1693567538;
int zero = 0;
short var_18 = (short)-27059;
unsigned short var_19 = (unsigned short)1828;
short var_20 = (short)29502;
int var_21 = 846565290;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
