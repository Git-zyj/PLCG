#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1631311943;
int var_7 = 1296630474;
unsigned short var_8 = (unsigned short)32386;
long long int var_10 = 6065226342967098219LL;
int zero = 0;
unsigned short var_12 = (unsigned short)62838;
signed char var_13 = (signed char)-45;
_Bool var_14 = (_Bool)1;
int var_15 = 1033063698;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
