#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2145724573720772466LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)224;
unsigned char var_8 = (unsigned char)251;
int zero = 0;
unsigned char var_10 = (unsigned char)155;
unsigned long long int var_11 = 11888901149292429232ULL;
unsigned long long int var_12 = 5132095602697321566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
