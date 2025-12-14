#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15295;
signed char var_1 = (signed char)-102;
unsigned char var_2 = (unsigned char)105;
unsigned int var_3 = 3377139585U;
short var_5 = (short)16306;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-12146;
unsigned long long int var_8 = 4693246971707554717ULL;
unsigned short var_9 = (unsigned short)37255;
long long int var_10 = -6820584763995852300LL;
unsigned short var_12 = (unsigned short)50813;
unsigned char var_13 = (unsigned char)163;
unsigned char var_14 = (unsigned char)9;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -6129736449412994512LL;
unsigned short var_17 = (unsigned short)18186;
unsigned long long int var_18 = 17879801038256169754ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
