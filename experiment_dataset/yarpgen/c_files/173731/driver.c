#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1829460579;
int var_3 = 1175181415;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3647520519U;
int var_8 = -1031721623;
int zero = 0;
unsigned short var_10 = (unsigned short)60852;
_Bool var_11 = (_Bool)0;
int var_12 = -957880858;
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
