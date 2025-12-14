#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16262076883860781107ULL;
int var_6 = 814920146;
unsigned long long int var_9 = 16811982733433787395ULL;
int var_16 = 842761552;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)1339;
int var_19 = -1826906542;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
