#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31697;
unsigned long long int var_9 = 17030284265352415792ULL;
unsigned short var_12 = (unsigned short)58356;
int zero = 0;
unsigned int var_17 = 857694023U;
short var_18 = (short)-11961;
unsigned short var_19 = (unsigned short)30584;
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
