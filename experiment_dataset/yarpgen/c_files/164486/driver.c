#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2226;
unsigned int var_4 = 1120753638U;
unsigned int var_5 = 183548853U;
short var_7 = (short)-31038;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1464158011U;
int zero = 0;
unsigned int var_10 = 3628458189U;
unsigned int var_11 = 2826455136U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1515510064U;
unsigned int var_14 = 4073145730U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
