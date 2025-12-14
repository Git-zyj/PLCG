#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
signed char var_4 = (signed char)-121;
int var_5 = -707917036;
unsigned long long int var_10 = 15785302756392120411ULL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 8960127986918989510LL;
int var_13 = -1066671408;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-64;
int var_17 = 2015051522;
signed char var_18 = (signed char)67;
unsigned short var_19 = (unsigned short)28529;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
