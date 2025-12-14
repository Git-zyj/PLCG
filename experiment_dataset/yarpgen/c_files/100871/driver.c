#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3621427985U;
unsigned long long int var_1 = 10151818129441343206ULL;
int var_2 = 1521436470;
short var_3 = (short)8618;
signed char var_9 = (signed char)81;
int zero = 0;
unsigned long long int var_11 = 1213848089624296475ULL;
long long int var_12 = 8790610239116821526LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
