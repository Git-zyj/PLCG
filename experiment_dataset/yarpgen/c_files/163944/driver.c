#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-58;
unsigned long long int var_8 = 15189452413608172710ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 212522093151283419ULL;
long long int var_14 = -5174624523805141535LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
