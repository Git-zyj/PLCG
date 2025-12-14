#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 867325084403967882ULL;
unsigned long long int var_2 = 10149301205696883316ULL;
unsigned long long int var_7 = 7210101116028028884ULL;
unsigned long long int var_8 = 14381316193991102950ULL;
unsigned long long int var_9 = 1081834993487731484ULL;
unsigned long long int var_11 = 11260400243554334961ULL;
unsigned long long int var_12 = 5480521602668652808ULL;
unsigned long long int var_13 = 9578760917720960116ULL;
int zero = 0;
unsigned long long int var_15 = 13325961446288591492ULL;
unsigned long long int var_16 = 11892546935345888720ULL;
unsigned long long int var_17 = 2544281375915226829ULL;
unsigned long long int var_18 = 16861439188425371313ULL;
unsigned long long int var_19 = 3243148371672291694ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
