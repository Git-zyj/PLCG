#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1905724397;
unsigned char var_1 = (unsigned char)77;
signed char var_2 = (signed char)-19;
signed char var_3 = (signed char)-44;
int var_7 = 907034204;
unsigned int var_8 = 1248169969U;
unsigned int var_9 = 2856078915U;
unsigned short var_12 = (unsigned short)18138;
unsigned int var_13 = 4111198882U;
unsigned int var_14 = 3334911502U;
int var_15 = -1456959010;
int zero = 0;
unsigned short var_18 = (unsigned short)17325;
unsigned char var_19 = (unsigned char)35;
signed char var_20 = (signed char)61;
unsigned long long int var_21 = 17329104974815608585ULL;
unsigned int var_22 = 3823704580U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
