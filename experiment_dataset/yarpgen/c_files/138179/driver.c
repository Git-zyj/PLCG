#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -722415778617966088LL;
unsigned char var_8 = (unsigned char)125;
long long int var_9 = -5687835165020290675LL;
unsigned long long int var_15 = 7675085431362548733ULL;
short var_16 = (short)25843;
int zero = 0;
unsigned int var_17 = 1827775065U;
int var_18 = -686474714;
unsigned char var_19 = (unsigned char)89;
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
