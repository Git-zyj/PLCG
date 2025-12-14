#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1077978635U;
unsigned char var_1 = (unsigned char)156;
unsigned int var_3 = 2407347627U;
unsigned char var_5 = (unsigned char)40;
unsigned short var_6 = (unsigned short)31358;
unsigned long long int var_7 = 4161575610646605125ULL;
short var_9 = (short)-22569;
short var_10 = (short)-6222;
int zero = 0;
unsigned int var_14 = 3117365139U;
unsigned short var_15 = (unsigned short)26091;
unsigned int var_16 = 565177738U;
long long int var_17 = 5839338411815449010LL;
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
