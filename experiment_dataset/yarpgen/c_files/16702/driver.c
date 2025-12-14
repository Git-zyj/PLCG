#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
long long int var_6 = 2617964792025440366LL;
long long int var_8 = -5998654272119179766LL;
long long int var_10 = 7496329496781099694LL;
int zero = 0;
long long int var_12 = 2589603768012796891LL;
unsigned short var_13 = (unsigned short)16897;
long long int var_14 = 2514645813899348110LL;
signed char var_15 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
