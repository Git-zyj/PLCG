#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3223907378U;
unsigned long long int var_4 = 5576491099400286990ULL;
unsigned short var_6 = (unsigned short)492;
signed char var_8 = (signed char)-65;
short var_9 = (short)8264;
int var_11 = -32007447;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5171542572736686357ULL;
void init() {
}

void checksum() {
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
