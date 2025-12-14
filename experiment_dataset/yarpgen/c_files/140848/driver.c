#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2243843686372047133ULL;
unsigned long long int var_2 = 11034883841561948148ULL;
_Bool var_3 = (_Bool)1;
int var_7 = -1136890043;
unsigned short var_10 = (unsigned short)37692;
unsigned long long int var_14 = 9203248132857598232ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)1;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16419606295757455146ULL;
unsigned long long int var_21 = 15830749919400265659ULL;
int var_22 = 527112197;
unsigned char var_23 = (unsigned char)122;
unsigned long long int var_24 = 14514128219083069712ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
