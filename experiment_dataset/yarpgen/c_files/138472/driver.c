#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1872789194U;
unsigned short var_4 = (unsigned short)3107;
int var_11 = -562387895;
long long int var_13 = -284915252036925978LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2836809770805749550ULL;
unsigned long long int var_17 = 14231822852122524464ULL;
long long int var_18 = -1468924926128466097LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
