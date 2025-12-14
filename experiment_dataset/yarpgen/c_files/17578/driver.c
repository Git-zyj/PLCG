#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8070325282938197713LL;
unsigned short var_2 = (unsigned short)61508;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1997285781210916024LL;
signed char var_6 = (signed char)122;
signed char var_7 = (signed char)-68;
long long int var_11 = 6535222460832217015LL;
unsigned int var_14 = 2939207186U;
unsigned int var_15 = 841573640U;
int zero = 0;
unsigned short var_17 = (unsigned short)6947;
unsigned long long int var_18 = 8353013017698217245ULL;
unsigned char var_19 = (unsigned char)155;
void init() {
}

void checksum() {
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
