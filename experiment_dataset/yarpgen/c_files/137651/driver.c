#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1639359832970443314LL;
long long int var_3 = 7576348606457525200LL;
long long int var_5 = -6024874552831538365LL;
signed char var_6 = (signed char)-110;
int var_8 = 349415394;
int var_15 = -829145253;
int zero = 0;
unsigned long long int var_18 = 6509054578347370097ULL;
long long int var_19 = 4429334895761360713LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
