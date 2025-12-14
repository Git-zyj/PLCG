#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1182648978329223796ULL;
int var_3 = -998295597;
signed char var_6 = (signed char)-24;
unsigned long long int var_17 = 12761014615375298726ULL;
unsigned int var_19 = 2556701519U;
int zero = 0;
long long int var_20 = 9212076054081996249LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-100;
unsigned long long int var_23 = 4174431095111093852ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
