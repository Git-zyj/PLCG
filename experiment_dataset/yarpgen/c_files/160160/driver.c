#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1414457467U;
unsigned char var_1 = (unsigned char)148;
unsigned long long int var_3 = 7127726380431749606ULL;
unsigned long long int var_4 = 17344327370326537526ULL;
unsigned long long int var_8 = 768528827712560852ULL;
short var_9 = (short)-23940;
unsigned long long int var_10 = 6201403539765779374ULL;
int zero = 0;
unsigned long long int var_11 = 3829351507166785270ULL;
unsigned int var_12 = 905944500U;
unsigned long long int var_13 = 15853624633871699812ULL;
long long int var_14 = 1962178193842018355LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
