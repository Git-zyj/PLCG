#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
unsigned long long int var_12 = 13613417553836201672ULL;
unsigned char var_13 = (unsigned char)117;
unsigned short var_14 = (unsigned short)50958;
long long int var_15 = -1488347945322807822LL;
unsigned char var_17 = (unsigned char)204;
unsigned int var_18 = 2755471088U;
int zero = 0;
unsigned char var_20 = (unsigned char)133;
signed char var_21 = (signed char)-46;
unsigned char var_22 = (unsigned char)108;
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
