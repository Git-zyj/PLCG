#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6460340718038864509LL;
long long int var_7 = 5276775789214843020LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8741804103970779706ULL;
int zero = 0;
unsigned int var_11 = 860689050U;
unsigned char var_12 = (unsigned char)203;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
