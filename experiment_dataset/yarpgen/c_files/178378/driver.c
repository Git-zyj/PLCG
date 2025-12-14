#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46448;
unsigned short var_2 = (unsigned short)57921;
long long int var_6 = -8273281459902180494LL;
unsigned short var_9 = (unsigned short)34401;
long long int var_10 = 1747475269570009921LL;
int zero = 0;
unsigned long long int var_13 = 17769360658889084078ULL;
signed char var_14 = (signed char)-54;
int var_15 = 1499240909;
unsigned short var_16 = (unsigned short)10976;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
