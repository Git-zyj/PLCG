#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1413146268;
unsigned int var_9 = 2535070198U;
long long int var_13 = 4333009751632492271LL;
long long int var_15 = 3200920181011823158LL;
int var_16 = 932085213;
unsigned char var_17 = (unsigned char)151;
int zero = 0;
unsigned long long int var_20 = 1429712757457593062ULL;
unsigned short var_21 = (unsigned short)50537;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 1881769753578505296ULL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
