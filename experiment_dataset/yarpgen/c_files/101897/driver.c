#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3429829312U;
int var_2 = 1375861178;
int var_3 = -1911050105;
unsigned int var_5 = 4030190448U;
unsigned short var_6 = (unsigned short)33186;
unsigned long long int var_9 = 18419485327595025446ULL;
int zero = 0;
unsigned int var_12 = 1197209874U;
unsigned int var_13 = 2668624812U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
