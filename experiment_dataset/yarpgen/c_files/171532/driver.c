#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8683563921152248222LL;
long long int var_2 = 3972092189839503097LL;
unsigned short var_4 = (unsigned short)56235;
signed char var_8 = (signed char)117;
int var_9 = -1605745948;
int var_10 = 1418997354;
unsigned int var_11 = 1766859746U;
unsigned long long int var_12 = 11616510416852927254ULL;
unsigned int var_13 = 2883917151U;
unsigned char var_16 = (unsigned char)221;
int zero = 0;
signed char var_18 = (signed char)-122;
unsigned long long int var_19 = 7256882955763568207ULL;
int var_20 = -1053965052;
unsigned int var_21 = 1123941270U;
int var_22 = 993499074;
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
