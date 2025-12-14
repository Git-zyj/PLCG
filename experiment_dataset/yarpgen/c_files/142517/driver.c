#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 494572168391331507LL;
long long int var_1 = 8584654243005583133LL;
unsigned char var_2 = (unsigned char)159;
unsigned short var_3 = (unsigned short)46785;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)58795;
unsigned long long int var_7 = 5728875715651334149ULL;
unsigned int var_9 = 1147372557U;
int zero = 0;
long long int var_10 = -4044503648928911101LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4481423510429514221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
