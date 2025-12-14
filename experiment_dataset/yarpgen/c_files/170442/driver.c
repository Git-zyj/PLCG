#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64355;
unsigned long long int var_1 = 14298129547297826617ULL;
unsigned long long int var_2 = 17649423232622044270ULL;
short var_3 = (short)977;
unsigned short var_7 = (unsigned short)3289;
long long int var_9 = -6704758264787344971LL;
unsigned long long int var_10 = 16138806670205124433ULL;
int zero = 0;
unsigned long long int var_15 = 8621797666452141531ULL;
unsigned int var_16 = 877534252U;
short var_17 = (short)-8911;
unsigned long long int var_18 = 10815518417016614339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
