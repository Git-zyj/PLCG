#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
_Bool var_6 = (_Bool)1;
short var_7 = (short)10001;
unsigned int var_8 = 2404375206U;
short var_9 = (short)6604;
long long int var_12 = -3024008281655628511LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17391379339948079087ULL;
unsigned short var_19 = (unsigned short)18997;
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
