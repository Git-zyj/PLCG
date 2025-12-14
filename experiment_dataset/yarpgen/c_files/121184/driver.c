#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5355130281221718705ULL;
short var_3 = (short)25765;
signed char var_4 = (signed char)-116;
unsigned long long int var_6 = 8939713762765525258ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)57040;
unsigned short var_10 = (unsigned short)28665;
unsigned long long int var_11 = 16531240704582813572ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)34033;
unsigned char var_14 = (unsigned char)34;
unsigned int var_15 = 2999376583U;
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
