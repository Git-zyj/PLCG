#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -432636512;
unsigned int var_4 = 1144465773U;
unsigned int var_8 = 1647804413U;
unsigned short var_14 = (unsigned short)25749;
unsigned int var_15 = 1718123987U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 11531261964074980847ULL;
unsigned long long int var_20 = 7133928960214478952ULL;
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
