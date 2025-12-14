#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13791;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 16667921524960431060ULL;
unsigned int var_4 = 178076060U;
unsigned int var_5 = 661904744U;
unsigned long long int var_6 = 6662344728085062319ULL;
unsigned short var_8 = (unsigned short)52260;
unsigned char var_10 = (unsigned char)115;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13154104906028848943ULL;
unsigned long long int var_15 = 14655900798802496984ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
