#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned long long int var_4 = 1825424315929579827ULL;
short var_6 = (short)-30431;
long long int var_7 = 2679183131378761093LL;
short var_8 = (short)-23324;
unsigned char var_9 = (unsigned char)138;
unsigned short var_11 = (unsigned short)26947;
int zero = 0;
unsigned int var_13 = 1487454270U;
unsigned long long int var_14 = 16339021437871921624ULL;
void init() {
}

void checksum() {
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
