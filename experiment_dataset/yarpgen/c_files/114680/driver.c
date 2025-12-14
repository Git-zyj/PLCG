#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13777;
int var_3 = 251498999;
signed char var_5 = (signed char)(-127 - 1);
unsigned long long int var_6 = 5731537968936274051ULL;
signed char var_7 = (signed char)54;
_Bool var_8 = (_Bool)1;
int var_9 = 214920323;
int zero = 0;
unsigned char var_10 = (unsigned char)129;
unsigned long long int var_11 = 9908642804046725737ULL;
long long int var_12 = 5225152863163710137LL;
unsigned char var_13 = (unsigned char)109;
unsigned char var_14 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
