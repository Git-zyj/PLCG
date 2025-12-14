#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4259315004576974720LL;
unsigned int var_3 = 7942724U;
unsigned long long int var_4 = 11764386569589500170ULL;
short var_7 = (short)11229;
int var_9 = 1860062415;
_Bool var_10 = (_Bool)1;
long long int var_16 = -6432956352495198789LL;
long long int var_17 = 5688943314124904830LL;
short var_19 = (short)18021;
int zero = 0;
long long int var_20 = 2070739220019204011LL;
short var_21 = (short)-32016;
unsigned long long int var_22 = 15474115771287284929ULL;
long long int var_23 = -8874893342998877575LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
