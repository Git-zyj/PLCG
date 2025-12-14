#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10023244077016326766ULL;
long long int var_8 = 6308020677644851191LL;
unsigned char var_13 = (unsigned char)134;
short var_14 = (short)-25733;
int zero = 0;
unsigned char var_18 = (unsigned char)106;
unsigned long long int var_19 = 6067094783071086401ULL;
void init() {
}

void checksum() {
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
