#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1993769155;
signed char var_5 = (signed char)-16;
unsigned short var_7 = (unsigned short)8366;
unsigned char var_8 = (unsigned char)26;
unsigned long long int var_10 = 2222266174559706725ULL;
int zero = 0;
int var_13 = 1132552408;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
