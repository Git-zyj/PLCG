#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned short var_5 = (unsigned short)26754;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6839813393737579173ULL;
unsigned long long int var_13 = 5546386603500559321ULL;
long long int var_17 = -2530165466532235470LL;
signed char var_19 = (signed char)81;
int zero = 0;
long long int var_20 = -8890367734898423611LL;
int var_21 = -444401986;
int var_22 = -392308915;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
