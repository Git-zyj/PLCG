#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 204545169;
int zero = 0;
signed char var_10 = (signed char)54;
signed char var_11 = (signed char)4;
long long int var_12 = -7683650994011277012LL;
signed char var_13 = (signed char)-6;
unsigned long long int var_14 = 13519035713287252522ULL;
unsigned long long int var_15 = 10841600772552685035ULL;
unsigned long long int var_16 = 2881032684454164647ULL;
unsigned long long int var_17 = 13493545668263295802ULL;
short var_18 = (short)18477;
unsigned short var_19 = (unsigned short)29411;
unsigned int var_20 = 927829517U;
unsigned long long int var_21 = 852498992360332445ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
