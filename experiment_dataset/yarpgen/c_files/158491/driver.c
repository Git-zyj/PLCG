#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17624116703678982268ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 10766020338716981357ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int var_16 = -1384576645;
unsigned short var_17 = (unsigned short)37687;
int zero = 0;
unsigned short var_18 = (unsigned short)60016;
int var_19 = 1198697523;
unsigned int var_20 = 690551129U;
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
