#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8209541261050672111LL;
long long int var_4 = 5021838022261035301LL;
long long int var_8 = 6622269317918566274LL;
unsigned int var_10 = 4066220950U;
unsigned char var_11 = (unsigned char)130;
unsigned long long int var_12 = 5599568699520540219ULL;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17665975656408355843ULL;
unsigned long long int var_22 = 10672180182185145969ULL;
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
