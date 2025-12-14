#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -462992620;
unsigned long long int var_6 = 10084690359387217536ULL;
unsigned int var_9 = 727216788U;
unsigned long long int var_10 = 16260702481976493494ULL;
long long int var_14 = -5876573197366037516LL;
int zero = 0;
unsigned short var_15 = (unsigned short)63514;
unsigned char var_16 = (unsigned char)165;
long long int var_17 = 603169049433960856LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
