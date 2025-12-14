#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8344238568857896345LL;
long long int var_10 = -8732450680298619111LL;
long long int var_11 = -483028539285530507LL;
long long int var_12 = 4755911700338783295LL;
int zero = 0;
long long int var_20 = -5897502968130693362LL;
long long int var_21 = -2061775317660845936LL;
long long int var_22 = 7382931259966971918LL;
void init() {
}

void checksum() {
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
