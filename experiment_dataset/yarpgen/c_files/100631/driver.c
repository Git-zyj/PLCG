#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52309;
signed char var_2 = (signed char)60;
signed char var_5 = (signed char)-19;
unsigned char var_8 = (unsigned char)57;
signed char var_15 = (signed char)26;
int zero = 0;
int var_18 = -1671586209;
signed char var_19 = (signed char)-42;
long long int var_20 = 3193462007289167872LL;
short var_21 = (short)12669;
void init() {
}

void checksum() {
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
