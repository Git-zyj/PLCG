#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5469343477924559978LL;
int var_5 = 1601590841;
signed char var_10 = (signed char)110;
int var_12 = -737509781;
int var_15 = -836618970;
int zero = 0;
unsigned long long int var_19 = 2638064546306881104ULL;
long long int var_20 = 3667389116431886303LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
