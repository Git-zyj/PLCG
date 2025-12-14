#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25683;
unsigned long long int var_2 = 12710613060313485445ULL;
long long int var_7 = 6571541331647908272LL;
signed char var_8 = (signed char)-51;
long long int var_11 = -5642377707623583090LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8957755349715149467ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
unsigned int var_18 = 3143685523U;
void init() {
}

void checksum() {
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
