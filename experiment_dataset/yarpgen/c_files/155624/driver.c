#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
unsigned long long int var_2 = 6853221074295668230ULL;
unsigned long long int var_4 = 4805103832405894107ULL;
unsigned long long int var_5 = 5684386976396577461ULL;
unsigned long long int var_6 = 7677767952731841093ULL;
unsigned long long int var_9 = 10588343775534195805ULL;
unsigned long long int var_13 = 17109100621401874395ULL;
unsigned long long int var_14 = 4025817619995679230ULL;
int zero = 0;
unsigned long long int var_17 = 9324308111608659048ULL;
unsigned char var_18 = (unsigned char)1;
unsigned char var_19 = (unsigned char)180;
unsigned long long int var_20 = 4574898713316381130ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
