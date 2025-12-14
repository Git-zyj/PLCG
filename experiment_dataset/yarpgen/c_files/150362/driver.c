#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1811010207620113600LL;
unsigned short var_5 = (unsigned short)28441;
short var_6 = (short)-10672;
short var_7 = (short)-26296;
unsigned short var_9 = (unsigned short)30607;
unsigned short var_11 = (unsigned short)36924;
int var_12 = 1122825776;
long long int var_17 = 4989383829437647378LL;
int zero = 0;
int var_18 = 972351520;
unsigned short var_19 = (unsigned short)20108;
unsigned short var_20 = (unsigned short)26972;
short var_21 = (short)-17112;
short var_22 = (short)-18178;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
