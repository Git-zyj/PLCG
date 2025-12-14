#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13533590039027260890ULL;
long long int var_11 = -465939735039658760LL;
int zero = 0;
unsigned short var_14 = (unsigned short)19090;
unsigned long long int var_15 = 370103684375225545ULL;
int var_16 = -1957575777;
unsigned char var_17 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
