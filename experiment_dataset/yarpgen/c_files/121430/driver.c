#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14428555422645378846ULL;
signed char var_4 = (signed char)-25;
unsigned char var_5 = (unsigned char)192;
int var_6 = -69561501;
long long int var_9 = 6018657353072772173LL;
unsigned int var_10 = 1746530659U;
unsigned long long int var_12 = 9088035147338612105ULL;
int zero = 0;
long long int var_14 = 5726935836930976475LL;
int var_15 = 2140643263;
unsigned short var_16 = (unsigned short)35204;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
