#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11738239681814219180ULL;
int var_4 = -391656497;
long long int var_6 = -1919355075467275659LL;
unsigned short var_7 = (unsigned short)37230;
_Bool var_10 = (_Bool)1;
signed char var_14 = (signed char)-89;
unsigned short var_19 = (unsigned short)44932;
int zero = 0;
long long int var_20 = 6065409412938323018LL;
long long int var_21 = 8988757584177665479LL;
signed char var_22 = (signed char)108;
unsigned short var_23 = (unsigned short)35104;
void init() {
}

void checksum() {
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
