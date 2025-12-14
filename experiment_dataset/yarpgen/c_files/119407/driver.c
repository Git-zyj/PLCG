#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 812353445;
unsigned short var_1 = (unsigned short)57303;
long long int var_3 = -3639329238690753089LL;
unsigned char var_5 = (unsigned char)172;
int var_6 = 878681713;
long long int var_7 = -5402267978013848114LL;
unsigned int var_10 = 1821030674U;
int var_11 = 1659587176;
unsigned short var_15 = (unsigned short)29523;
signed char var_16 = (signed char)97;
int zero = 0;
int var_17 = -1987576842;
int var_18 = 1580470630;
long long int var_19 = 6950753167933072206LL;
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
