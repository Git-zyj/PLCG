#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14291479914590226156ULL;
unsigned long long int var_1 = 1723851787007481616ULL;
unsigned long long int var_5 = 516900500579908823ULL;
signed char var_6 = (signed char)-107;
int var_9 = 641959735;
unsigned char var_14 = (unsigned char)60;
unsigned long long int var_16 = 12516107303016087ULL;
int zero = 0;
long long int var_18 = 4125881431671413126LL;
unsigned char var_19 = (unsigned char)67;
long long int var_20 = 1862343214076082695LL;
unsigned long long int var_21 = 7665146661691285821ULL;
signed char var_22 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
