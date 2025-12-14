#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
unsigned short var_3 = (unsigned short)16375;
unsigned long long int var_5 = 9200781662578920994ULL;
unsigned long long int var_10 = 13166893165600899343ULL;
unsigned long long int var_11 = 2297102967163860006ULL;
int zero = 0;
long long int var_12 = -8495373301532606739LL;
unsigned long long int var_13 = 1176984679563531005ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
