#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
_Bool var_1 = (_Bool)1;
long long int var_4 = 3796572036661502267LL;
int var_7 = 892506413;
unsigned long long int var_10 = 17266029207114450013ULL;
unsigned int var_11 = 3520997087U;
signed char var_13 = (signed char)26;
unsigned short var_15 = (unsigned short)32993;
unsigned short var_16 = (unsigned short)58053;
short var_18 = (short)-2592;
int zero = 0;
unsigned int var_19 = 3247424888U;
signed char var_20 = (signed char)-110;
int var_21 = 1295885482;
unsigned int var_22 = 1419701090U;
unsigned short var_23 = (unsigned short)27226;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
