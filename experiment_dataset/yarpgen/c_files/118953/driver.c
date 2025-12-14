#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 484922964866372143LL;
long long int var_2 = 5334834732144176878LL;
int var_5 = 1340519809;
int var_8 = 573329492;
unsigned int var_10 = 255281152U;
signed char var_11 = (signed char)49;
int var_12 = 1067759058;
unsigned int var_13 = 4188118719U;
short var_14 = (short)-5804;
signed char var_15 = (signed char)52;
signed char var_16 = (signed char)-54;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -1723907734;
int var_19 = -431355079;
long long int var_20 = -7140827407004448041LL;
int var_21 = -692319487;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
