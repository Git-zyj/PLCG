#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2666177871426530122LL;
unsigned long long int var_3 = 7240078272660205900ULL;
unsigned short var_9 = (unsigned short)54043;
unsigned long long int var_10 = 17392624727520942969ULL;
unsigned long long int var_11 = 11083665361115058437ULL;
signed char var_17 = (signed char)121;
int zero = 0;
unsigned char var_20 = (unsigned char)52;
unsigned short var_21 = (unsigned short)15307;
unsigned short var_22 = (unsigned short)57257;
signed char var_23 = (signed char)-43;
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
