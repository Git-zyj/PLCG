#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1916286107U;
long long int var_3 = 6319968457616806203LL;
long long int var_5 = -4792154748574688236LL;
unsigned char var_8 = (unsigned char)187;
signed char var_9 = (signed char)76;
signed char var_11 = (signed char)-13;
short var_12 = (short)-26800;
long long int var_14 = 2248322209340277458LL;
int var_15 = 843192185;
int var_16 = 1612089303;
unsigned int var_17 = 1428448152U;
int zero = 0;
long long int var_18 = 189421034859028493LL;
unsigned int var_19 = 4071318108U;
unsigned long long int var_20 = 15448521986076339207ULL;
_Bool var_21 = (_Bool)1;
int var_22 = 1930005469;
unsigned short var_23 = (unsigned short)705;
unsigned int var_24 = 3469432673U;
unsigned long long int var_25 = 14534965540297858386ULL;
unsigned char var_26 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
