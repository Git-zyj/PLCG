#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
unsigned char var_4 = (unsigned char)10;
int var_6 = 39393677;
unsigned short var_8 = (unsigned short)35399;
unsigned long long int var_9 = 10160155132361483094ULL;
int zero = 0;
int var_10 = -1605378788;
unsigned long long int var_11 = 16794801823339663469ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
