#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6694103556021730077LL;
short var_7 = (short)-11118;
signed char var_9 = (signed char)-60;
unsigned char var_11 = (unsigned char)17;
int zero = 0;
long long int var_14 = -477889510693546778LL;
unsigned int var_15 = 1746952485U;
long long int var_16 = 7309641722722372708LL;
unsigned short var_17 = (unsigned short)591;
int var_18 = -1484100424;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
