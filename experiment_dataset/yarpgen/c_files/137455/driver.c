#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1074049165368546787LL;
unsigned long long int var_4 = 9096699227697581396ULL;
unsigned int var_6 = 1527543593U;
unsigned int var_7 = 241305980U;
short var_8 = (short)26102;
short var_10 = (short)18786;
unsigned int var_11 = 599872503U;
long long int var_12 = -5373194316976757488LL;
signed char var_14 = (signed char)-72;
int zero = 0;
unsigned char var_16 = (unsigned char)28;
long long int var_17 = -1984666870428810911LL;
unsigned char var_18 = (unsigned char)11;
unsigned char var_19 = (unsigned char)219;
unsigned int var_20 = 3734362258U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
