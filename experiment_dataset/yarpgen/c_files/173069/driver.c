#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15211353404250169290ULL;
unsigned char var_8 = (unsigned char)147;
unsigned long long int var_13 = 4737287671374768520ULL;
unsigned char var_14 = (unsigned char)76;
unsigned long long int var_15 = 6761150110576854260ULL;
int zero = 0;
long long int var_16 = -1522922142741885646LL;
long long int var_17 = 4519239441610311669LL;
unsigned char var_18 = (unsigned char)233;
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
