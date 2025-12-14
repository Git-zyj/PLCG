#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3378083824U;
unsigned short var_5 = (unsigned short)62009;
long long int var_6 = 3326726923604355260LL;
unsigned int var_10 = 2102353861U;
unsigned short var_15 = (unsigned short)47784;
int zero = 0;
unsigned short var_18 = (unsigned short)32679;
signed char var_19 = (signed char)-112;
unsigned int var_20 = 2038127123U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
