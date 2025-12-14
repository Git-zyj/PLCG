#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3645687045161517570LL;
long long int var_3 = 8406812120369832945LL;
unsigned long long int var_8 = 5821250570928675084ULL;
signed char var_9 = (signed char)-110;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
unsigned long long int var_16 = 708759021122919841ULL;
long long int var_17 = -9122590599643865287LL;
void init() {
}

void checksum() {
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
