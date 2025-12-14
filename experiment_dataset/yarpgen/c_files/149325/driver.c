#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6386955174655904625ULL;
unsigned int var_1 = 282474919U;
unsigned int var_2 = 2931591501U;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3850736499U;
unsigned long long int var_7 = 16096290289576508175ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
