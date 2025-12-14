#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7707408050471287766ULL;
signed char var_10 = (signed char)61;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 14810412820333465219ULL;
unsigned long long int var_21 = 7416578996553230496ULL;
unsigned long long int var_22 = 7432320422724712072ULL;
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
