#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-57;
long long int var_3 = 2088275925415221945LL;
int var_4 = 1458315205;
int var_5 = 1628287669;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4010812326477676019ULL;
int var_8 = -1071719215;
unsigned int var_9 = 1056665429U;
int zero = 0;
int var_10 = -114480369;
signed char var_11 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
