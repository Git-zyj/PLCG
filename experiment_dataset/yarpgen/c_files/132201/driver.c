#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
unsigned char var_3 = (unsigned char)250;
long long int var_5 = 8965689069167576299LL;
long long int var_6 = 4564107762308144879LL;
signed char var_7 = (signed char)-67;
signed char var_8 = (signed char)-43;
unsigned short var_10 = (unsigned short)40696;
unsigned long long int var_13 = 2437423425522296276ULL;
long long int var_15 = 5813655535158620143LL;
int zero = 0;
unsigned long long int var_16 = 4346071108539870188ULL;
unsigned char var_17 = (unsigned char)156;
long long int var_18 = 3437650833002834175LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
