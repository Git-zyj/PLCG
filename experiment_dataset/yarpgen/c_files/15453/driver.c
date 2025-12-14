#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24222;
long long int var_6 = 3905249848438134286LL;
long long int var_7 = 8086835387923682049LL;
unsigned char var_8 = (unsigned char)106;
unsigned int var_9 = 2262775890U;
short var_10 = (short)-16462;
int zero = 0;
unsigned int var_11 = 664267685U;
short var_12 = (short)1548;
long long int var_13 = 4848307022832567205LL;
unsigned int var_14 = 1910075929U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
