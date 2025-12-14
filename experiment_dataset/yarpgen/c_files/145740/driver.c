#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12266;
long long int var_2 = 7731203595701351422LL;
unsigned char var_3 = (unsigned char)180;
unsigned char var_5 = (unsigned char)59;
int var_6 = -1197816404;
unsigned short var_7 = (unsigned short)11173;
long long int var_9 = 5495202899113137543LL;
signed char var_14 = (signed char)-101;
unsigned char var_15 = (unsigned char)73;
signed char var_17 = (signed char)-65;
int zero = 0;
unsigned short var_20 = (unsigned short)27697;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)34974;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
