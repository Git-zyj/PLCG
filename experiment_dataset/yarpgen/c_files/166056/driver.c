#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11370205939306055327ULL;
unsigned int var_1 = 2947308306U;
unsigned int var_2 = 1112841002U;
unsigned int var_3 = 1934245823U;
signed char var_4 = (signed char)46;
unsigned long long int var_5 = 12344969469229620607ULL;
signed char var_7 = (signed char)-27;
unsigned char var_10 = (unsigned char)221;
signed char var_18 = (signed char)-127;
int zero = 0;
unsigned long long int var_19 = 1498175932761024842ULL;
unsigned char var_20 = (unsigned char)232;
unsigned long long int var_21 = 12597039627644575705ULL;
unsigned long long int var_22 = 7078494993666614141ULL;
_Bool var_23 = (_Bool)0;
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
