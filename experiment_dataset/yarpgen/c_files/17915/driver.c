#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5949081884908484748LL;
unsigned int var_1 = 3343909162U;
unsigned int var_2 = 2150554589U;
_Bool var_3 = (_Bool)0;
int var_4 = -723537210;
signed char var_5 = (signed char)35;
short var_6 = (short)13140;
signed char var_7 = (signed char)-121;
unsigned int var_8 = 1443018413U;
long long int var_9 = 2842205599267725435LL;
int zero = 0;
unsigned short var_10 = (unsigned short)64444;
signed char var_11 = (signed char)94;
unsigned short var_12 = (unsigned short)57334;
unsigned long long int var_13 = 3147893770741577362ULL;
unsigned int var_14 = 2174019215U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
