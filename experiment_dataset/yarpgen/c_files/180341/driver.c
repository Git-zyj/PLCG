#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
int var_2 = -750410445;
signed char var_3 = (signed char)-42;
unsigned int var_5 = 3062150313U;
signed char var_6 = (signed char)78;
int var_7 = 623953524;
unsigned int var_8 = 4245705825U;
unsigned short var_9 = (unsigned short)22386;
_Bool var_10 = (_Bool)1;
int var_11 = -338209102;
unsigned short var_12 = (unsigned short)60006;
unsigned char var_13 = (unsigned char)14;
unsigned long long int var_14 = 11408681918093019601ULL;
signed char var_15 = (signed char)17;
long long int var_16 = -5074577368941227970LL;
int zero = 0;
int var_17 = 1821973485;
unsigned long long int var_18 = 12695325279150979201ULL;
int var_19 = -517604476;
int var_20 = 858787931;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
