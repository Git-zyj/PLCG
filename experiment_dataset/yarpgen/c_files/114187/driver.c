#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7303454753086649935LL;
long long int var_1 = -3768474886183390092LL;
unsigned long long int var_2 = 11077790763285226137ULL;
long long int var_3 = -2452723777387825841LL;
unsigned short var_4 = (unsigned short)60292;
int var_5 = -1361472138;
unsigned long long int var_9 = 11200880498820256369ULL;
signed char var_10 = (signed char)30;
int zero = 0;
int var_12 = -435618456;
signed char var_13 = (signed char)119;
long long int var_14 = -5842427265251866102LL;
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
