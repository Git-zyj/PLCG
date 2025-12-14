#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned char var_1 = (unsigned char)138;
unsigned int var_3 = 2324465516U;
unsigned int var_4 = 670387475U;
unsigned long long int var_5 = 17291550365286828548ULL;
unsigned short var_7 = (unsigned short)23433;
unsigned char var_9 = (unsigned char)190;
int var_13 = 1419973804;
int zero = 0;
int var_14 = -293501175;
unsigned char var_15 = (unsigned char)121;
unsigned int var_16 = 2391636516U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
