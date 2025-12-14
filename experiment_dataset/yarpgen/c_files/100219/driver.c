#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2710269273U;
signed char var_1 = (signed char)54;
signed char var_2 = (signed char)-114;
short var_3 = (short)-3715;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 449605959U;
unsigned int var_6 = 3450511212U;
int var_7 = -378852096;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-22556;
unsigned int var_10 = 783891013U;
unsigned short var_11 = (unsigned short)62604;
int var_12 = 2024722767;
unsigned int var_13 = 1787481600U;
unsigned int var_14 = 1331128714U;
unsigned int var_15 = 415053386U;
int zero = 0;
int var_17 = 246660218;
unsigned char var_18 = (unsigned char)214;
unsigned int var_19 = 2481557658U;
unsigned int var_20 = 1582700034U;
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
