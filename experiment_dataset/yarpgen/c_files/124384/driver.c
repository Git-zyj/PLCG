#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 375092180786456028ULL;
unsigned long long int var_4 = 4396785153346545617ULL;
unsigned long long int var_10 = 13376935418910424051ULL;
_Bool var_12 = (_Bool)1;
signed char var_17 = (signed char)-11;
int zero = 0;
signed char var_19 = (signed char)-89;
unsigned char var_20 = (unsigned char)26;
unsigned long long int var_21 = 6323461076475542334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
