#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28785;
signed char var_3 = (signed char)-26;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 589999276615672200ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 1157138909264893983ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)12001;
unsigned long long int var_12 = 2799783581116651448ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
