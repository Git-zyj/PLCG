#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
int var_1 = -1537913941;
unsigned long long int var_2 = 13020231969827083735ULL;
unsigned long long int var_3 = 4589118856885178176ULL;
unsigned int var_4 = 326215903U;
unsigned char var_5 = (unsigned char)108;
unsigned long long int var_6 = 8168240345192172149ULL;
unsigned int var_7 = 845249244U;
unsigned long long int var_8 = 13578904326110478067ULL;
unsigned int var_12 = 3958452998U;
unsigned long long int var_13 = 586619002420702682ULL;
int var_14 = 128179255;
int var_15 = 545506582;
int zero = 0;
unsigned int var_16 = 3221051745U;
unsigned long long int var_17 = 8451568951282331400ULL;
unsigned short var_18 = (unsigned short)25203;
void init() {
}

void checksum() {
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
