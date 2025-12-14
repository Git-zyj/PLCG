#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned short var_1 = (unsigned short)48900;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-27533;
unsigned char var_8 = (unsigned char)218;
unsigned long long int var_9 = 10092873496923973498ULL;
unsigned long long int var_13 = 8527238562658760731ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)51;
unsigned char var_18 = (unsigned char)160;
unsigned long long int var_19 = 5650812001230657661ULL;
short var_20 = (short)14233;
short var_21 = (short)-24697;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
