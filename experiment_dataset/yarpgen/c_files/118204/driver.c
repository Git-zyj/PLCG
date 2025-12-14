#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2847471299U;
long long int var_12 = -704792727355719396LL;
short var_15 = (short)26238;
unsigned short var_16 = (unsigned short)6003;
int zero = 0;
unsigned short var_17 = (unsigned short)56794;
unsigned int var_18 = 2854107382U;
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
