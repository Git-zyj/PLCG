#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -943727707;
unsigned long long int var_2 = 10513136960758505148ULL;
int var_4 = -2018856355;
signed char var_7 = (signed char)-2;
unsigned long long int var_10 = 11142942138139021288ULL;
unsigned short var_14 = (unsigned short)32030;
unsigned long long int var_15 = 3480633958652091712ULL;
int zero = 0;
signed char var_18 = (signed char)-29;
short var_19 = (short)-6062;
long long int var_20 = 4828515597690247426LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
