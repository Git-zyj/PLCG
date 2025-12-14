#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7359324626818795998LL;
long long int var_2 = -7862125806828638078LL;
long long int var_9 = 752608897188800822LL;
long long int var_10 = 159668936856120033LL;
long long int var_11 = -7251784911399867833LL;
int zero = 0;
long long int var_14 = 1988223945306959939LL;
long long int var_15 = -2494451058623487710LL;
void init() {
}

void checksum() {
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
