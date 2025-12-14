#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11522337511915003482ULL;
unsigned long long int var_2 = 17035316008562160375ULL;
signed char var_4 = (signed char)113;
unsigned short var_9 = (unsigned short)18222;
int zero = 0;
signed char var_10 = (signed char)64;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)61679;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
