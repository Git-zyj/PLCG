#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10744190683141853806ULL;
int var_2 = -1820023919;
long long int var_4 = -3034412877017126690LL;
unsigned long long int var_5 = 8381397713162315852ULL;
unsigned short var_6 = (unsigned short)29321;
unsigned short var_9 = (unsigned short)58111;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)43;
unsigned short var_14 = (unsigned short)20782;
int zero = 0;
long long int var_17 = 4972919803138577195LL;
long long int var_18 = -2292277485135029550LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
