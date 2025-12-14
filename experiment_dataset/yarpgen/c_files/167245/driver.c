#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1539099060307000727ULL;
int var_2 = 580080222;
signed char var_4 = (signed char)-3;
int var_5 = -43054069;
signed char var_11 = (signed char)86;
unsigned long long int var_12 = 14170286928438325351ULL;
int zero = 0;
int var_13 = -1829773699;
unsigned short var_14 = (unsigned short)4955;
unsigned long long int var_15 = 17063914118998482371ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12606597793662220603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
