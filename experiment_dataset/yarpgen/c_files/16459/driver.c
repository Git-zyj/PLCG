#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_7 = -2101125770;
int var_8 = 18456329;
unsigned char var_9 = (unsigned char)122;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6855463296193488629ULL;
unsigned short var_13 = (unsigned short)37892;
int zero = 0;
unsigned long long int var_14 = 2051398468245471897ULL;
unsigned long long int var_15 = 3360150074125025798ULL;
unsigned short var_16 = (unsigned short)62183;
unsigned short var_17 = (unsigned short)19474;
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
