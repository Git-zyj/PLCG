#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1983075135637120616ULL;
unsigned long long int var_4 = 17980222263436454410ULL;
unsigned short var_11 = (unsigned short)64154;
unsigned long long int var_14 = 7613782851759155240ULL;
int zero = 0;
int var_16 = -2064712485;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)108;
unsigned long long int var_19 = 10406253827981867983ULL;
void init() {
}

void checksum() {
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
