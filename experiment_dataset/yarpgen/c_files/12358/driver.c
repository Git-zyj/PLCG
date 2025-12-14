#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14232998314648422675ULL;
signed char var_2 = (signed char)-47;
unsigned long long int var_3 = 5970680467031424497ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)14848;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4405347756109077812ULL;
unsigned long long int var_10 = 14779349918373434893ULL;
unsigned short var_13 = (unsigned short)31200;
unsigned short var_14 = (unsigned short)54574;
unsigned long long int var_15 = 7801263374981560536ULL;
unsigned int var_16 = 2922325856U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1392603317U;
unsigned short var_21 = (unsigned short)30318;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)50;
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
