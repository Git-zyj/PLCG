#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1444222511927472268LL;
unsigned long long int var_2 = 15408296020932765649ULL;
long long int var_4 = 1055895272525947147LL;
unsigned long long int var_10 = 7303260336657568055ULL;
long long int var_13 = 2111136956830642940LL;
int zero = 0;
int var_19 = 107272712;
signed char var_20 = (signed char)-76;
unsigned short var_21 = (unsigned short)45224;
unsigned long long int var_22 = 8675529326847576149ULL;
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
