#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 994054953;
unsigned long long int var_3 = 2423444010805322552ULL;
signed char var_4 = (signed char)-52;
int var_5 = -1060792361;
unsigned long long int var_9 = 8326860018674613391ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-21;
unsigned char var_21 = (unsigned char)89;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
