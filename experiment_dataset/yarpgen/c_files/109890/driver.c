#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1373536019738724188LL;
int var_1 = 871572172;
_Bool var_2 = (_Bool)0;
long long int var_4 = -3516272090104972277LL;
long long int var_5 = 2044941853364598874LL;
unsigned long long int var_8 = 1891972822540281122ULL;
short var_9 = (short)15441;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-103;
short var_14 = (short)19677;
unsigned long long int var_15 = 2934447875713176542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
