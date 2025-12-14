#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25649;
unsigned long long int var_3 = 9187128998325887887ULL;
unsigned int var_4 = 2362515701U;
unsigned int var_7 = 558903309U;
short var_11 = (short)21517;
signed char var_12 = (signed char)17;
int zero = 0;
long long int var_13 = 8458331890120016810LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
