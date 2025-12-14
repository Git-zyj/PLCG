#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16468;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)57016;
unsigned short var_3 = (unsigned short)62326;
unsigned int var_4 = 201758519U;
unsigned short var_5 = (unsigned short)1584;
unsigned short var_6 = (unsigned short)20667;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)31875;
unsigned long long int var_9 = 10171045983070923646ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)54893;
unsigned long long int var_12 = 1582135726727555517ULL;
unsigned short var_13 = (unsigned short)39069;
unsigned short var_14 = (unsigned short)23254;
unsigned short var_15 = (unsigned short)32227;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
