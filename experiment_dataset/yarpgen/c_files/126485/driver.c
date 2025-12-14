#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13618761568502970055ULL;
signed char var_3 = (signed char)-27;
unsigned short var_4 = (unsigned short)23109;
long long int var_6 = -1813729507435281923LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 15984129322537984696ULL;
unsigned int var_10 = 3501419378U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-85;
int zero = 0;
int var_15 = 1177323691;
unsigned short var_16 = (unsigned short)25021;
unsigned short var_17 = (unsigned short)58700;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
