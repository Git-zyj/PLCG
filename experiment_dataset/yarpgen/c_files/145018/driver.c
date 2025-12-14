#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1313687345;
unsigned short var_3 = (unsigned short)41936;
unsigned int var_4 = 471800552U;
long long int var_5 = -3077496167787513064LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 16060544095104124029ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_11 = -1668862904;
unsigned int var_12 = 2989916662U;
long long int var_13 = 8138257376806815510LL;
unsigned short var_14 = (unsigned short)15431;
int zero = 0;
unsigned char var_15 = (unsigned char)57;
unsigned int var_16 = 724097008U;
unsigned short var_17 = (unsigned short)40786;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
