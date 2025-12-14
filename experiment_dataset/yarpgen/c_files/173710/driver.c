#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4256746610553758283LL;
unsigned int var_2 = 3625017001U;
int var_3 = -1615933490;
signed char var_5 = (signed char)118;
unsigned long long int var_8 = 6688166177184017168ULL;
long long int var_9 = 8981301580655708446LL;
unsigned int var_10 = 3782152671U;
int zero = 0;
long long int var_16 = 8237960167931043187LL;
unsigned short var_17 = (unsigned short)53406;
unsigned short var_18 = (unsigned short)36350;
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
