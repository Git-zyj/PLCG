#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5764585687240904621LL;
short var_1 = (short)-31010;
unsigned long long int var_2 = 201951041827455199ULL;
unsigned long long int var_5 = 2673779459492997669ULL;
unsigned int var_8 = 2836160165U;
unsigned short var_9 = (unsigned short)7916;
unsigned long long int var_10 = 10012504739818829879ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 8281754192532034319LL;
unsigned long long int var_13 = 2976835555506749457ULL;
int var_14 = 2043855815;
void init() {
}

void checksum() {
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
