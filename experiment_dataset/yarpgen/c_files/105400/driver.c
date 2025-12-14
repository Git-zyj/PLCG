#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2281802831U;
unsigned int var_1 = 352211203U;
unsigned long long int var_2 = 17540743205277773961ULL;
unsigned int var_3 = 1035059290U;
unsigned short var_4 = (unsigned short)11252;
short var_7 = (short)-21202;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1513687868U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned long long int var_16 = 11782599884764235766ULL;
short var_17 = (short)15219;
unsigned short var_18 = (unsigned short)19;
unsigned int var_19 = 3193933160U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
