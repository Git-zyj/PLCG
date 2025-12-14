#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13493;
unsigned long long int var_2 = 2597674018451592431ULL;
int var_3 = -833996361;
signed char var_4 = (signed char)45;
unsigned int var_5 = 3120948643U;
int var_6 = 1296766830;
long long int var_7 = 5820445299944409050LL;
unsigned int var_8 = 683729194U;
unsigned long long int var_9 = 2215714714803496277ULL;
signed char var_10 = (signed char)67;
int zero = 0;
long long int var_11 = -5043801256055123163LL;
unsigned short var_12 = (unsigned short)60679;
unsigned char var_13 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
