#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6948346960683555044LL;
unsigned int var_2 = 2414560379U;
unsigned int var_3 = 1860732192U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)22;
unsigned long long int var_6 = 16306188505507978787ULL;
int var_7 = 79746107;
unsigned short var_9 = (unsigned short)31041;
short var_10 = (short)23681;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)210;
unsigned int var_13 = 1613918395U;
unsigned int var_14 = 769656800U;
unsigned char var_15 = (unsigned char)212;
long long int var_18 = 214491152455060411LL;
int zero = 0;
signed char var_20 = (signed char)-104;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-16340;
long long int var_23 = -1291843026657761247LL;
unsigned char var_24 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
