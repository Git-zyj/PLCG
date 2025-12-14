#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1398482098;
unsigned char var_2 = (unsigned char)80;
long long int var_3 = -8508185996097602480LL;
long long int var_4 = 2493133473795156126LL;
int var_5 = 1314112834;
unsigned char var_6 = (unsigned char)40;
int var_7 = 180549865;
int var_8 = -1115814661;
_Bool var_9 = (_Bool)1;
int var_10 = -1679159964;
int zero = 0;
int var_11 = 251270478;
_Bool var_12 = (_Bool)0;
int var_13 = 1829199102;
void init() {
}

void checksum() {
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
