#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4358658570080106553LL;
unsigned char var_2 = (unsigned char)91;
signed char var_9 = (signed char)-3;
unsigned char var_10 = (unsigned char)153;
long long int var_11 = 6908561719889876853LL;
int zero = 0;
unsigned long long int var_16 = 3262928206857817595ULL;
unsigned int var_17 = 2268734003U;
long long int var_18 = -3588274993607143249LL;
void init() {
}

void checksum() {
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
