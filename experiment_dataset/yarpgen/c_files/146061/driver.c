#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
int var_1 = 1874431313;
unsigned char var_3 = (unsigned char)36;
short var_5 = (short)-4445;
unsigned char var_6 = (unsigned char)229;
long long int var_8 = 9207984803372724725LL;
int var_10 = -789004835;
int var_15 = 1182448147;
long long int var_16 = 6029690800101724335LL;
unsigned char var_19 = (unsigned char)247;
int zero = 0;
unsigned long long int var_20 = 8519825841329029945ULL;
int var_21 = 31995674;
unsigned long long int var_22 = 3844670326209949815ULL;
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
