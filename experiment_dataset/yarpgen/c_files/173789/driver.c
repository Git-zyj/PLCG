#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3768154908918854745LL;
short var_9 = (short)26422;
int var_12 = -1957839879;
unsigned int var_13 = 2370332369U;
short var_16 = (short)31810;
unsigned int var_17 = 2673298057U;
int zero = 0;
unsigned long long int var_18 = 11847266806797967623ULL;
short var_19 = (short)-27074;
signed char var_20 = (signed char)-52;
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
