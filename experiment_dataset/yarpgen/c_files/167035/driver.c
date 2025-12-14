#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22024;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 16271506700304023373ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 2670456807021905862LL;
unsigned short var_7 = (unsigned short)8412;
unsigned long long int var_8 = 13880227829661860187ULL;
int zero = 0;
signed char var_10 = (signed char)-108;
unsigned short var_11 = (unsigned short)61640;
unsigned short var_12 = (unsigned short)17992;
signed char var_13 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
