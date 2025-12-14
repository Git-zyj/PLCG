#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -94658277266841828LL;
unsigned int var_4 = 3021084868U;
short var_8 = (short)26325;
unsigned short var_9 = (unsigned short)11163;
long long int var_10 = 1398211843777549354LL;
int var_11 = -489348934;
unsigned int var_13 = 959275526U;
int zero = 0;
unsigned short var_18 = (unsigned short)32523;
unsigned char var_19 = (unsigned char)180;
short var_20 = (short)-18906;
long long int var_21 = 113249213802292031LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
