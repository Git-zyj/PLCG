#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
unsigned long long int var_2 = 13197665826868360685ULL;
unsigned int var_3 = 2986443094U;
unsigned long long int var_5 = 12820329214279839905ULL;
short var_9 = (short)2937;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-109;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2903532560U;
_Bool var_20 = (_Bool)1;
int var_21 = 85016125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
