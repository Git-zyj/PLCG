#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2198396789717334186LL;
unsigned char var_3 = (unsigned char)202;
unsigned short var_13 = (unsigned short)18764;
signed char var_14 = (signed char)108;
unsigned short var_15 = (unsigned short)23173;
int zero = 0;
unsigned long long int var_17 = 8257772101706522538ULL;
unsigned long long int var_18 = 8558939421394197675ULL;
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
