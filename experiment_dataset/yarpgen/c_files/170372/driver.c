#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = 4518796805870796728LL;
int var_7 = -1330353921;
unsigned char var_9 = (unsigned char)41;
long long int var_11 = 2252970509354780046LL;
signed char var_16 = (signed char)122;
int zero = 0;
unsigned char var_17 = (unsigned char)182;
short var_18 = (short)-10126;
_Bool var_19 = (_Bool)1;
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
